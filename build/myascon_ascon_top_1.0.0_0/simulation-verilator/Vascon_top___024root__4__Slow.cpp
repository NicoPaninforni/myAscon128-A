// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__6(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__6\n"); );
    // Variables
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10;
    // Body
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
    vlSelf->ascon_top__DOT__sel_masked_round = 1U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__sel_masked_round = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_masked_round = 0U;
            }
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
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
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
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
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelf->start)))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((0x40U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                        ? 0xbU : 0xcU);
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 0xfU : 0xeU);
            } else if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if (vlSelf->valid_data_in) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                    if (((IData)(vlSelf->EOT) & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                    }
                } else if (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                            & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                }
            } else {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                        & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))
                        ? 0xbU : 6U);
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 7U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U))) ? 0xaU
                             : 9U));
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                }
            } else if (((IData)(vlSelf->valid_data_in) 
                        | (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 6U : 2U);
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                    == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                        - (IData)(1U))) ? 5U : 4U);
        } else if ((0x40U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if (vlSelf->start) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelf->load_data) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
        if (vlSelf->ascon_top__DOT__sel_padding) {
            vlSelf->ascon_top__DOT__unnamedblk4__DOT__i = 0x10U;
        }
    }
    if (vlSelf->ascon_top__DOT__extra_padding_ff) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0U;
        if ((0U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff000000U & vlSelf->data_in[3U]));
        }
        if ((1U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff0000U & vlSelf->data_in[3U]));
        }
        if ((2U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff00U & vlSelf->data_in[3U]));
        }
        if ((3U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xffU & vlSelf->data_in[3U]));
        }
        if ((4U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff000000U & vlSelf->data_in[2U]));
        }
        if ((5U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff0000U & vlSelf->data_in[2U]));
        }
        if ((6U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff00U & vlSelf->data_in[2U]));
        }
        if ((7U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xffU & vlSelf->data_in[2U]));
        }
        if ((8U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff000000U & vlSelf->data_in[1U]));
        }
        if ((9U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff0000U & vlSelf->data_in[1U]));
        }
        if ((0xaU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff00U & vlSelf->data_in[1U]));
        }
        if ((0xbU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xffU & vlSelf->data_in[1U]));
        }
        if ((0xcU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff000000U & vlSelf->data_in[0U]));
        }
        if ((0xdU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff0000U & vlSelf->data_in[0U]));
        }
        if ((0xeU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff00U & vlSelf->data_in[0U]));
        }
        if ((0xfU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xffU & vlSelf->data_in[0U]));
        }
        VL_ASSIGNSEL_WIII(128,8,(0x7fU & (((IData)(0x7fU) 
                                           - ((IData)(vlSelf->valid_bytes) 
                                              << 3U)) 
                                          - (IData)(7U))), vlSelf->ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelf->ascon_top__DOT__data_in_padded[0U] 
            = vlSelf->data_in[0U];
        vlSelf->ascon_top__DOT__data_in_padded[1U] 
            = vlSelf->data_in[1U];
        vlSelf->ascon_top__DOT__data_in_padded[2U] 
            = vlSelf->data_in[2U];
        vlSelf->ascon_top__DOT__data_in_padded[3U] 
            = vlSelf->data_in[3U];
    }
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
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__rc_block[0U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
        vlSelf->ascon_top__DOT__rc_block[1U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
        vlSelf->ascon_top__DOT__rc_block[2U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
    } else {
        vlSelf->ascon_top__DOT__rc_block[0U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(3U) 
                                                               * (IData)(vlSelf->ascon_top__DOT__bit_counter))))));
        vlSelf->ascon_top__DOT__rc_block[1U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(3U) 
                                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))));
        vlSelf->ascon_top__DOT__rc_block[2U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(2U) 
                                                               + 
                                                               ((IData)(3U) 
                                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))));
    }
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1;
}
