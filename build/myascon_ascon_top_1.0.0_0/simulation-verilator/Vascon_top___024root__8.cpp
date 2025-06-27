// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__47(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__47\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT____Vlvbound33;
    CData/*0:0*/ ascon_top__DOT____Vlvbound34;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i;
    // Body
    while (VL_LTS_III(1,32,32, 1U, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                        [
                                                        (7U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                        [
                                                        (7U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                       [
                                                       (7U 
                                                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(7U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num 
                = ((IData)(1U) + VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)));
        } else {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num 
                = VL_DIVS_III(32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout 
        = ((4U >= (7U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
               [(7U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x37ffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout) 
                                                   << 0x1bU));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound33));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 1U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 2U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 3U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 4U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 5U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 6U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 7U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 8U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 9U));
    ascon_top__DOT____Vlvbound33 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__28__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__28__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__28__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x2fffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout) 
                                                   << 0x1cU));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound34));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 1U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 2U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 3U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 4U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 5U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 6U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 7U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 8U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 9U));
    ascon_top__DOT____Vlvbound34 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x1fffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
                                                   << 0x1dU));
}

VL_INLINE_OPT void Vascon_top___024root___combo__TOP__48(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___combo__TOP__48\n"); );
    // Variables
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound1;
    // Body
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
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U])));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[0U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
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
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U])));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[2U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
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
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U])));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[4U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
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
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U])));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[6U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
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
        } else {
            vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4 
                = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U])));
            vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound4;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in[8U])));
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4U] 
            = vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound5;
    }
}

void Vascon_top___024root___sequent__TOP__37(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__38(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__39(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__40(Vascon_top___024root* vlSelf);
void Vascon_top___024root___combo__TOP__41(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__42(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__43(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__44(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__45(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__46(Vascon_top___024root* vlSelf);

void Vascon_top___024root___eval(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Vascon_top___024root___sequent__TOP__37(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vascon_top___024root___sequent__TOP__38(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vascon_top___024root___sequent__TOP__39(vlSelf);
        Vascon_top___024root___sequent__TOP__40(vlSelf);
    }
    Vascon_top___024root___combo__TOP__41(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Vascon_top___024root___sequent__TOP__42(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vascon_top___024root___sequent__TOP__43(vlSelf);
        Vascon_top___024root___sequent__TOP__44(vlSelf);
        Vascon_top___024root___sequent__TOP__45(vlSelf);
        Vascon_top___024root___sequent__TOP__46(vlSelf);
        Vascon_top___024root___sequent__TOP__47(vlSelf);
    }
    Vascon_top___024root___combo__TOP__48(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
}

QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf);

VL_INLINE_OPT QData Vascon_top___024root___change_request(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request\n"); );
    // Body
    return (Vascon_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->key_valid & 0xfeU))) {
        Verilated::overWidthError("key_valid");}
    if (VL_UNLIKELY((vlSelf->valid_data_in & 0xfeU))) {
        Verilated::overWidthError("valid_data_in");}
    if (VL_UNLIKELY((vlSelf->last_block & 0xfeU))) {
        Verilated::overWidthError("last_block");}
    if (VL_UNLIKELY((vlSelf->valid_bytes & 0xe0U))) {
        Verilated::overWidthError("valid_bytes");}
    if (VL_UNLIKELY((vlSelf->EOT & 0xfeU))) {
        Verilated::overWidthError("EOT");}
}
#endif  // VL_DEBUG
