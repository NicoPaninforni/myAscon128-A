// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__39(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__39\n"); );
    // Variables
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound7;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound8;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__32__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__32__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__33__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__33__x;
    // Body
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 5U, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7feU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 1U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 2U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7f7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 3U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7efU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 4U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7dfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 5U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7bfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 6U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x77fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 7U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][3U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x6ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 8U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x5ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 9U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__430__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x3ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 0xaU));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 5U, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7feU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 1U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 2U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7f7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 3U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7efU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 4U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7dfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 5U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7bfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 6U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x77fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 7U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][3U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x6ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 8U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x5ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 9U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__429__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x3ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 0xaU));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 5U, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7feU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 1U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7fbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 2U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7f7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 3U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7efU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 4U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7dfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 5U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x7bfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 6U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x77fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 7U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                  ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                  : 0U)][3U]);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x6ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 8U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x5ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 9U));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 1U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 2U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 3U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 4U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 5U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 6U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 7U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 8U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 9U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
            = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i))
                        ? (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
            = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
               | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
                  << 0xaU));
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level = 0U;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num = 0xbU;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__N)) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = ((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)) 
                   & ((IData)(vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__in) 
                      >> (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)));
            if (VL_LIKELY((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i)))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                           << (0xfU 
                                               & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk7__DOT__i);
        }
        while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num)) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i = 0U;
            while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i, 
                              VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                    = (((0xaU >= (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                        & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                             ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                             : 0U) >> (0xfU & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)))) 
                          & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                               ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                              [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                               : 0U) >> (0xfU & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))))));
                if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i)) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                        << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__unnamedblk8__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) {
                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                    = ((0xaU >= (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                         - (IData)(1U)))) 
                       & (((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                           [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)]
                            : 0U) >> (0xfU & (vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                                              - (IData)(1U)))));
                if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)))) 
                               & (4U >= (7U & ((IData)(1U) 
                                               + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)))))) {
                    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))) 
                            & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                            [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))]) 
                           | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U))))));
                }
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U)));
            } else {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num 
                    = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__num, (IData)(2U));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level);
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout 
            = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level))
                ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__stage
                   [(7U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__level)])
                : 0U);
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
            = vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__428__Vfuncout;
        if (VL_LIKELY((4U >= (7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)] 
                = ((0x3ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i)]) 
                   | ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                      << 0xaU));
        }
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0xbU;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i 
            = ((IData)(1U) + vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i);
    }
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__state_reg_out[0U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__state_reg_out[1U] = (IData)(
                                                        (ascon_top__DOT__state_reg__DOT____Vlvbound8 
                                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__state_reg_out[2U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__state_reg_out[3U] = (IData)(
                                                        (ascon_top__DOT__state_reg__DOT____Vlvbound8 
                                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__state_reg_out[4U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__state_reg_out[5U] = (IData)(
                                                        (ascon_top__DOT__state_reg__DOT____Vlvbound8 
                                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__state_reg_out[6U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__state_reg_out[7U] = (IData)(
                                                        (ascon_top__DOT__state_reg__DOT____Vlvbound8 
                                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__state_reg_out[8U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__state_reg_out[9U] = (IData)(
                                                        (ascon_top__DOT__state_reg__DOT____Vlvbound8 
                                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound7 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound7);
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound7 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound7 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound7);
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound7 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound7 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound7);
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound7 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound7 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound7);
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound7 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound7 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound7);
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound7 
                   >> 0x20U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [0U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [0U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [0U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [0U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [0U]));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [1U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [1U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [1U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [1U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [1U]));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [2U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [2U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [2U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [2U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [2U]));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [3U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [3U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [3U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [3U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [3U]));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [4U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [4U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [4U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [4U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [4U]));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [5U] >> 0x2cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [5U] >> 0x21U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [5U] >> 0x16U)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelf->ascon_top__DOT__sbox_input
                             [5U] >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelf->ascon_top__DOT__sbox_input
                            [5U]));
    vlSelf->ascon_top__DOT__sbox_output[5U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output[4U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output[3U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output[2U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output[1U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output[0U] = (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                [4U])) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                   [3U])) 
                                                   << 0x21U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                      [2U])) 
                                                      << 0x16U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                         [1U] 
                                                                         << 0xbU) 
                                                                        | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                        [0U]))))));
    vlSelf->debug_state_0 = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out[0U])));
    vlSelf->debug_state_1 = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out[2U])));
    vlSelf->debug_state_2 = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out[4U])));
    vlSelf->debug_state_3 = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out[6U])));
    vlSelf->debug_state_4 = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[9U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out[8U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[2U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[4U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[3U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[6U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[4U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[8U])));
    __Vfunc_ascon_top__DOT__rotr64__33__x = (((QData)((IData)(
                                                              vlSelf->ascon_top__DOT__state_reg_out[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ascon_top__DOT__state_reg_out[0U])));
    __Vfunc_ascon_top__DOT__rotr64__33__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__33__x >> 0x1cU) 
         | (__Vfunc_ascon_top__DOT__rotr64__33__x << 0x24U));
    __Vfunc_ascon_top__DOT__rotr64__32__x = (((QData)((IData)(
                                                              vlSelf->ascon_top__DOT__state_reg_out[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ascon_top__DOT__state_reg_out[0U])));
    __Vfunc_ascon_top__DOT__rotr64__32__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__32__x >> 0x13U) 
         | (__Vfunc_ascon_top__DOT__rotr64__32__x << 0x2dU));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[0U] 
        = (((((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[0U]))) 
            ^ __Vfunc_ascon_top__DOT__rotr64__32__Vfuncout) 
           ^ __Vfunc_ascon_top__DOT__rotr64__33__Vfuncout);
}
