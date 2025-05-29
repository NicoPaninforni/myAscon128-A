// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__1(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___stl_sequent__TOP__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
    vlSelfRef.ascon_top__DOT__sel_masked_round = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__sel_masked_round 
                = ((1U & ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)) && ((1U & ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                                             >> 1U)) 
                                      && ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)) 
                                          && (IData)(vlSelfRef.debug_extra_padding_ff))));
        } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
            }
        }
    }
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state;
    if ((0x10U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((0xbU == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                        ? 0xbU : 0xcU);
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 0xfU : 0xeU);
            } else if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if (vlSelfRef.valid_data_in) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                    if (((IData)(vlSelfRef.EOT) & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                    }
                } else if (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                            & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                }
            } else {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                        & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))
                        ? 0xbU : 6U);
            }
        } else {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 7U : (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U))) ? 0xaU
                             : 9U));
        }
    } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                }
            } else if (((IData)(vlSelfRef.valid_data_in) 
                        | (IData)(vlSelfRef.debug_extra_padding_ff))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
            }
        } else {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 6U : 2U);
        }
    } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                    == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                        - (IData)(1U))) ? 5U : 4U);
        } else if ((0xbU == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if (vlSelfRef.key_valid) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelfRef.start) {
        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
    }
    if (vlSelfRef.debug_extra_padding_ff) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelfRef.ascon_top__DOT__sel_padding) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0U;
        vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i = 0U;
        while ((vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                < (IData)(vlSelfRef.valid_bytes))) {
            VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                             - VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                            - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 
                            (0xffU & (((0U == (0x1fU 
                                               & (((IData)(0x7fU) 
                                                   - 
                                                   VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                  - (IData)(7U))))
                                        ? 0U : (vlSelfRef.data_in[
                                                (((IData)(7U) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(0x7fU) 
                                                       - 
                                                       VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                      - (IData)(7U)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7fU) 
                                                      - 
                                                      VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                     - (IData)(7U)))))) 
                                      | (vlSelfRef.data_in[
                                         (3U & ((((IData)(0x7fU) 
                                                  - 
                                                  VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                 - (IData)(7U)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & (((IData)(0x7fU) 
                                                 - 
                                                 VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                - (IData)(7U)))))));
            vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i);
        }
        VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                         - VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.valid_bytes), 3U)) 
                                        - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] 
            = vlSelfRef.data_in[0U];
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] 
            = vlSelfRef.data_in[1U];
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] 
            = vlSelfRef.data_in[2U];
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] 
            = vlSelfRef.data_in[3U];
    }
    vlSelfRef.debug_state_2 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
    vlSelfRef.debug_state_3 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
    vlSelfRef.debug_state_4 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
    vlSelfRef.debug_state_0 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
    vlSelfRef.debug_state_1 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[0U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__32__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__32__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__32__x, 0x13U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__32__x, 0x2dU));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__32__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__33__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__33__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__33__x, 0x1cU) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__33__x, 0x24U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__33__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[2U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__34__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__34__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__34__x, 0x3dU) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__34__x, 3U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__34__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__35__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__35__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__35__x, 0x27U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__35__x, 0x19U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__35__Vfuncout));
}
