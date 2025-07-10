// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__17(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__17\n"); );
    // Variables
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound1;
    // Body
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x37ffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout) 
                                                   << 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x1bU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x1cU))));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x19U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x1aU))));
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__28__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__28__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x2fffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout) 
                                                   << 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x1cU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x1dU))));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x1aU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x1bU))));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x1fffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
                                                   << 0x1dU));
    ascon_top__DOT__state_reg__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__recombine_shares))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 4U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fU & vlSelf->ascon_top__DOT__recombine_shares))) 
                        << 0x3aU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 6U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)((0xffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U]))) 
                    << 0x30U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [0U] >> 0x10U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
                = (((QData)((IData)((0xffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U]))) 
                    << 0x28U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [0U] >> 0x18U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[0U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6;
    }
    ascon_top__DOT__state_reg__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                 >> 6U)))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 4U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                  >> 6U)))) 
                        << 0x3aU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 6U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)((0xffffU & ((vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
                                                 << 8U) 
                                                | (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
                                                   >> 0x18U))))) 
                    << 0x30U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [1U] >> 0x10U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
                = (((QData)((IData)((0xffffffU & ((
                                                   vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
                                                   << 8U) 
                                                  | (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
                                                     >> 0x18U))))) 
                    << 0x28U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [1U] >> 0x18U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[2U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6;
    }
    ascon_top__DOT__state_reg__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                 >> 0xcU)))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 4U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                  >> 0xcU)))) 
                        << 0x3aU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 6U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)((vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
                                     >> 0x10U))) << 0x30U) 
                   | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                      [2U] >> 0x10U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
                = (((QData)((IData)((0xffffffU & ((
                                                   vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
                                                     >> 0x10U))))) 
                    << 0x28U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [2U] >> 0x18U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[4U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6;
    }
    ascon_top__DOT__state_reg__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                 >> 0x12U)))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 4U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                  >> 0x12U)))) 
                        << 0x3aU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 6U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)((0xffffU & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
                                                >> 8U)))) 
                    << 0x30U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [3U] >> 0x10U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
                = (((QData)((IData)((vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
                                     >> 8U))) << 0x28U) 
                   | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                      [3U] >> 0x18U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[6U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6;
    }
    ascon_top__DOT__state_reg__DOT____Vlvbound1 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 
                    = (((QData)((IData)((0xfU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                 >> 0x18U)))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 4U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 
                    = (((QData)((IData)((0x3fU & (vlSelf->ascon_top__DOT__recombine_shares 
                                                  >> 0x18U)))) 
                        << 0x3aU) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 6U));
                vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)((0xffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]))) 
                    << 0x30U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [4U] >> 0x10U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
                = (((QData)((IData)((0xffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]))) 
                    << 0x28U) | (vlSelf->ascon_top__DOT__state_reg__DOT__state
                                 [4U] >> 0x18U));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[8U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6;
    }
}

void Vascon_top___024root___initial__TOP__1(Vascon_top___024root* vlSelf) VL_ATTR_COLD;

void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_initial\n"); );
    // Body
    Vascon_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
}

void Vascon_top___024root___settle__TOP__2(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__3(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__4(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__5(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__6(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__7(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__8(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__9(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__10(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__11(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__12(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__13(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__14(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__15(Vascon_top___024root* vlSelf) VL_ATTR_COLD;
void Vascon_top___024root___settle__TOP__16(Vascon_top___024root* vlSelf) VL_ATTR_COLD;

void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_settle\n"); );
    // Body
    Vascon_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vascon_top___024root___settle__TOP__3(vlSelf);
    Vascon_top___024root___settle__TOP__4(vlSelf);
    Vascon_top___024root___settle__TOP__5(vlSelf);
    Vascon_top___024root___settle__TOP__6(vlSelf);
    Vascon_top___024root___settle__TOP__7(vlSelf);
    Vascon_top___024root___settle__TOP__8(vlSelf);
    Vascon_top___024root___settle__TOP__9(vlSelf);
    Vascon_top___024root___settle__TOP__10(vlSelf);
    Vascon_top___024root___settle__TOP__11(vlSelf);
    Vascon_top___024root___settle__TOP__12(vlSelf);
    Vascon_top___024root___settle__TOP__13(vlSelf);
    Vascon_top___024root___settle__TOP__14(vlSelf);
    Vascon_top___024root___settle__TOP__15(vlSelf);
    Vascon_top___024root___settle__TOP__16(vlSelf);
    Vascon_top___024root___settle__TOP__17(vlSelf);
}

void Vascon_top___024root___final(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___final\n"); );
}

void Vascon_top___024root___ctor_var_reset(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    vlSelf->key1 = VL_RAND_RESET_Q(64);
    vlSelf->key2 = VL_RAND_RESET_Q(64);
    vlSelf->key_valid = VL_RAND_RESET_I(1);
    vlSelf->nonce1 = VL_RAND_RESET_Q(64);
    vlSelf->nonce2 = VL_RAND_RESET_Q(64);
    vlSelf->initialVector = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->data_in);
    vlSelf->valid_data_in = VL_RAND_RESET_I(1);
    vlSelf->last_block = VL_RAND_RESET_I(1);
    vlSelf->valid_bytes = VL_RAND_RESET_I(5);
    vlSelf->EOT = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->state_reg_out);
    vlSelf->ciphertext_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ciphertext);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ready_tag = VL_RAND_RESET_I(1);
    vlSelf->tag1 = VL_RAND_RESET_Q(64);
    vlSelf->tag2 = VL_RAND_RESET_Q(64);
    vlSelf->ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->read_data = VL_RAND_RESET_I(1);
    vlSelf->debug_extra_padding_ff = VL_RAND_RESET_I(1);
    vlSelf->debug_bitcounter = VL_RAND_RESET_I(4);
    vlSelf->debug_roundcounter = VL_RAND_RESET_I(4);
    vlSelf->debug_state = VL_RAND_RESET_I(5);
    vlSelf->debug_state_0 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_1 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_2 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_state_4 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_0 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_1 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_2 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_round_state_4 = VL_RAND_RESET_Q(64);
    vlSelf->debug_linear_diffusion_state3 = VL_RAND_RESET_Q(64);
    vlSelf->debug_linear_diffusion_state4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(96, vlSelf->ascon_top__DOT__lfsr_out);
    vlSelf->ascon_top__DOT__lfsr_state_in = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__lfsr_state_out = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__extra_padding_ff = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_en = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_type = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__last_cycle = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__reg_key1_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__reg_key2_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_init_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_masked_round = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_padding = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_xor_signal = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__sel_absorb_data = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_enable_sipo = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__last_cycle_sipo = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__round_counter = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__bit_counter = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_in);
    VL_RAND_RESET_W(120, vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1);
    VL_RAND_RESET_W(120, vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1);
    vlSelf->ascon_top__DOT__mux_1st_x0 = VL_RAND_RESET_I(24);
    vlSelf->ascon_top__DOT__mux_1st_x1 = VL_RAND_RESET_I(24);
    vlSelf->ascon_top__DOT__mux_1st_x2 = VL_RAND_RESET_I(24);
    vlSelf->ascon_top__DOT__mux_1st_x3 = VL_RAND_RESET_I(24);
    vlSelf->ascon_top__DOT__mux_1st_x4 = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ascon_top__DOT__rc_block[__Vi0] = VL_RAND_RESET_I(6);
    }
    VL_RAND_RESET_W(120, vlSelf->ascon_top__DOT__shares_out);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer_in[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer_out[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ascon_top__DOT__next_sbox_input[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_input[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output_unmasked[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->ascon_top__DOT__mux_sbox_out[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer2nd_in[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer2nd_out[__Vi0] = VL_RAND_RESET_I(30);
    }
    vlSelf->ascon_top__DOT__recombine_shares = VL_RAND_RESET_I(30);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg_in_absorb[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__linear_diffusion_out);
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__data_in_padded);
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__reverse_reg_data_out);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__linear_diffusion_debug[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__unnamedblk1__DOT__p = 0;
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->ascon_top__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4 = VL_RAND_RESET_I(31);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state = VL_RAND_RESET_I(5);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg__DOT__state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound2 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound3 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound6 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__share_creator__DOT__temp = VL_RAND_RESET_I(30);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound8 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__56__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__56__lfsr_mask_data[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__70__lfsr_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__70__lfsr_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__83__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__83__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__97__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__97__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__97__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__97__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__111__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__111__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__111__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__111__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__125__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__125__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__125__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__125__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__139__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__139__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__139__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__139__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__153__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__153__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__153__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__153__data_val);
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_state[__Vi0] = VL_RAND_RESET_I(31);
    }
    for (int __Vi0=0; __Vi0<96; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_data[__Vi0]);
    }
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__state_val = VL_RAND_RESET_I(31);
    VL_RAND_RESET_W(96, vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__173__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__173__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__174__stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__174__unnamedblk8__DOT__i = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
