// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__29(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__29\n"); );
    // Variables
    SData/*8:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in;
    SData/*8:0*/ __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v0;
    SData/*8:0*/ __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v1;
    SData/*8:0*/ __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v2;
    SData/*8:0*/ __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v3;
    SData/*8:0*/ __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v4;
    SData/*14:0*/ ascon_top__DOT____Vlvbound1;
    SData/*14:0*/ __Vdlyvval__ascon_top__DOT__sbox_input__v0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i;
    // Body
    vlSelf->ascon_top__DOT__unnamedblk1__DOT__p = 1U;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 5U;
    ascon_top__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__next_sbox_input
        [0U];
    __Vdlyvval__ascon_top__DOT__sbox_input__v0 = ascon_top__DOT____Vlvbound1;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
        [0U];
    __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v0 
        = ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
        [1U];
    __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v1 
        = ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
        [2U];
    __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v2 
        = ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
        [3U];
    __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v3 
        = ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
        [4U];
    __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v4 
        = ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound6;
    vlSelf->ascon_top__DOT__sbox_input[0U] = __Vdlyvval__ascon_top__DOT__sbox_input__v0;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[0U] 
        = __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v0;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[1U] 
        = __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v1;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[2U] 
        = __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v2;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[3U] 
        = __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v3;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[4U] 
        = __Vdlyvval__ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg__v4;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4U] 
        = (7U & (vlSelf->ascon_top__DOT__sbox_input
                 [0U] >> 0xcU));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3U] 
        = (7U & (vlSelf->ascon_top__DOT__sbox_input
                 [0U] >> 9U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2U] 
        = (7U & (vlSelf->ascon_top__DOT__sbox_input
                 [0U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1U] 
        = (7U & (vlSelf->ascon_top__DOT__sbox_input
                 [0U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0U] 
        = (7U & vlSelf->ascon_top__DOT__sbox_input[0U]);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [2U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [3U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [4U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [4U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    vlSelf->ascon_top__DOT__sbox_output[0U] = ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                [4U] 
                                                << 0xcU) 
                                               | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                   [3U] 
                                                   << 9U) 
                                                  | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                      [2U] 
                                                      << 6U) 
                                                     | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                         [1U] 
                                                         << 3U) 
                                                        | vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                        [0U]))));
}

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__30(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__30\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5;
    // Body
    vlSelf->ascon_top__DOT__lfsr_state_in = ((IData)(vlSelf->reset_n_lfsr)
                                              ? vlSelf->ascon_top__DOT__lfsr_state_out
                                              : 0x1234567U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg = 0U;
    if ((1U & (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ vlSelf->ascon_top__DOT__lfsr_state_in));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 1U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 1U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 2U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 2U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 3U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 3U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 4U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 4U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 5U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 5U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 6U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 6U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 7U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 7U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 8U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 8U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 9U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 9U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xaU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xaU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xbU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xbU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xcU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xcU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xdU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xdU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xeU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xeU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0xfU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0xfU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x10U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x10U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x11U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x11U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x12U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x12U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x13U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x13U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x14U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x14U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x15U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x15U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x16U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x16U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x17U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x17U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x18U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x18U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x19U)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x19U)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x1aU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1aU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x1bU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1bU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x1cU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1cU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x1dU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1dU)));
    }
    if ((1U & (IData)((vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
                       >> 0x1eU)))) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg 
            = (1U & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                     ^ (vlSelf->ascon_top__DOT__lfsr_state_in 
                        >> 0x1eU)));
    }
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ffffff0U 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7fffff0fU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg) 
                                                        << 5U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg) 
                                                          << 4U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ffff0ffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg) 
                                                        << 9U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg) 
                                                          << 8U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7fff0fffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg) 
                                                        << 0xdU) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg) 
                                                          << 0xcU)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7ff0ffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg) 
                                                        << 0x11U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg) 
                                                          << 0x10U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x7f0fffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg) 
                                                        << 0x15U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg) 
                                                          << 0x14U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0x70ffffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg) 
                                                        << 0x19U) 
                                                       | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg) 
                                                          << 0x18U)))));
    vlSelf->ascon_top__DOT__lfsr_state_out = ((0xfffffffU 
                                               & vlSelf->ascon_top__DOT__lfsr_state_out) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg) 
                                                     << 0x1dU) 
                                                    | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg) 
                                                       << 0x1cU))));
    vlSelf->ascon_top__DOT__lfsr_out = ((0x1ff0U & (IData)(vlSelf->ascon_top__DOT__lfsr_out)) 
                                        | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg)))));
    vlSelf->ascon_top__DOT__lfsr_out = ((0x1f0fU & (IData)(vlSelf->ascon_top__DOT__lfsr_out)) 
                                        | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg) 
                                            << 7U) 
                                           | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg) 
                                                    << 4U)))));
    vlSelf->ascon_top__DOT__lfsr_out = ((0x10ffU & (IData)(vlSelf->ascon_top__DOT__lfsr_out)) 
                                        | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg) 
                                                  << 9U) 
                                                 | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg) 
                                                    << 8U)))));
    vlSelf->ascon_top__DOT__lfsr_out = ((0xfffU & (IData)(vlSelf->ascon_top__DOT__lfsr_out)) 
                                        | ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg) 
                                           << 0xcU));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [0U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [1U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [2U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [3U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0U] 
        = ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                              [3U] << 9U) | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [0U]))));
}
