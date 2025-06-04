// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_INLINE_OPT void Vascon_top___024root___nba_comb__TOP__1(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_comb__TOP__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 0;
    // Body
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h1ea7c5e7__0) 
              << 8U));
    vlSelfRef.ascon_top__DOT____Vlvbound_h1ea7c5e7__0 
        = (1U & (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                 [9U] >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h1ea7c5e7__0) 
              << 9U));
    vlSelfRef.ascon_top__DOT____Vlvbound_h1ea7c5e7__0 
        = (1U & (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                 [0xaU] >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h1ea7c5e7__0) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_hcf72403f__0 
            = ((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                         >> (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hcf72403f__0) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h95e776b1__0 
                = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                    && (1U & (((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                               [(7U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                : 0U) >> (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))))) 
                   ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                        + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))) 
                      && (1U & (((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                 [(7U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                  : 0U) >> (0xfU & 
                                            ((IData)(1U) 
                                             + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)) 
                            && (4U >= (7U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__29__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[(7U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h95e776b1__0) 
                                    << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h63babb1e__0 
                = ((0xaU >= (0xfU & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                     - (IData)(1U)))) 
                   && (1U & (((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                               ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                              [(7U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                               : 0U) >> (0xfU & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                 - (IData)(1U))))));
            if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) 
                            && (4U >= (7U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__29__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[(7U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h63babb1e__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares = ((0x1fffffffU 
                                                   & vlSelfRef.ascon_top__DOT__recombine_shares) 
                                                  | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
                                                     << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (IData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U]))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 6U)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xcU)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x12U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x18U)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [1U]))) << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 6U)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xcU)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x12U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x18U)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [2U]))) << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 6U)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xcU)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x12U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x18U)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [3U]))) << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 6U)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xcU)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x12U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x18U)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [4U]))) << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 6U)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xcU)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x12U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x18U)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [5U]))) << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 6U)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xcU)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x12U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x18U)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [6U]))) << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 6U)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xcU)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x12U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x18U)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [7U]))) << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 6U)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xcU)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x12U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x18U)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [8U]))) << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 6U)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xcU)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x12U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x18U)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [9U]))) << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 6U)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xcU)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x12U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x18U)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                                    [0xaU]))) << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 6U)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xcU)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x12U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x18U)))) 
                   << 0x36U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (IData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                         [0U] >> 1U)))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 7U)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xdU)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x13U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x19U)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 1U)))) 
                   << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 7U)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xdU)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x13U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x19U)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 1U)))) 
                   << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 7U)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xdU)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x13U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x19U)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 1U)))) 
                   << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 7U)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xdU)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x13U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x19U)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 1U)))) 
                   << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 7U)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xdU)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x13U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x19U)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 1U)))) 
                   << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 7U)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xdU)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x13U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x19U)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 1U)))) 
                   << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 7U)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xdU)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x13U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x19U)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 1U)))) 
                   << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 7U)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xdU)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x13U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x19U)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 1U)))) 
                   << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 7U)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xdU)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x13U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x19U)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 1U)))) 
                   << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 7U)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xdU)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x13U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x19U)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 1U)))) 
                   << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 7U)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xdU)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x13U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x19U)))) 
                   << 0x36U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (IData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                         [0U] >> 2U)))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 8U)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xeU)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x14U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x1aU)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 2U)))) 
                   << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 8U)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xeU)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x14U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x1aU)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 2U)))) 
                   << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 8U)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xeU)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x14U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x1aU)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 2U)))) 
                   << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 8U)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xeU)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x14U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x1aU)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 2U)))) 
                   << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 8U)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xeU)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x14U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x1aU)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 2U)))) 
                   << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 8U)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xeU)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x14U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x1aU)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 2U)))) 
                   << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 8U)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xeU)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x14U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x1aU)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 2U)))) 
                   << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 8U)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xeU)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x14U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x1aU)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 2U)))) 
                   << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 8U)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xeU)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x14U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x1aU)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 2U)))) 
                   << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 8U)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xeU)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x14U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x1aU)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 2U)))) 
                   << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 8U)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xeU)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x14U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x1aU)))) 
                   << 0x36U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (IData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                         [0U] >> 3U)))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 9U)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xfU)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x15U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x1bU)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 3U)))) 
                   << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 9U)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xfU)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x15U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x1bU)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 3U)))) 
                   << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 9U)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xfU)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x15U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x1bU)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 3U)))) 
                   << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 9U)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xfU)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x15U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x1bU)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 3U)))) 
                   << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 9U)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xfU)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x15U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x1bU)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 3U)))) 
                   << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 9U)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xfU)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x15U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x1bU)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 3U)))) 
                   << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 9U)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xfU)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x15U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x1bU)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 3U)))) 
                   << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 9U)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xfU)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x15U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x1bU)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 3U)))) 
                   << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 9U)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xfU)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x15U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x1bU)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 3U)))) 
                   << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 9U)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xfU)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x15U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x1bU)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 3U)))) 
                   << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 9U)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xfU)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x15U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x1bU)))) 
                   << 0x36U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (IData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                         [0U] >> 4U)))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xaU)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x10U)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x16U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x1cU)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 4U)))) 
                   << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xaU)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x10U)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x16U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x1cU)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 4U)))) 
                   << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xaU)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x10U)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x16U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x1cU)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 4U)))) 
                   << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xaU)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x10U)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x16U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x1cU)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 4U)))) 
                   << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xaU)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x10U)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x16U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x1cU)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 4U)))) 
                   << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xaU)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x10U)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x16U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x1cU)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 4U)))) 
                   << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xaU)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x10U)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x16U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x1cU)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 4U)))) 
                   << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xaU)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x10U)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x16U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x1cU)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 4U)))) 
                   << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xaU)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x10U)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x16U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x1cU)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 4U)))) 
                   << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xaU)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x10U)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x16U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x1cU)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 4U)))) 
                   << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xaU)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x10U)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x16U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x1cU)))) 
                   << 0x36U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffffeULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (IData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                         [0U] >> 5U)))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffff7ffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0xbU)))) 
                   << 0xbU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffbfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x11U)))) 
                   << 0x16U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffdffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x17U)))) 
                   << 0x21U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fefffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0U] >> 0x1dU)))) 
                   << 0x2cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffffdULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 5U)))) 
                   << 1U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffefffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0xbU)))) 
                   << 0xcU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffff7fffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x11U)))) 
                   << 0x17U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffbffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x17U)))) 
                   << 0x22U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fdfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [1U] >> 0x1dU)))) 
                   << 0x2dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffffbULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 5U)))) 
                   << 2U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffdfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0xbU)))) 
                   << 0xdU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffeffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x11U)))) 
                   << 0x18U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffff7ffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x17U)))) 
                   << 0x23U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fbfffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [2U] >> 0x1dU)))) 
                   << 0x2eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffff7ULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 5U)))) 
                   << 3U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffbfffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0xbU)))) 
                   << 0xeU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffdffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x11U)))) 
                   << 0x19U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffefffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x17U)))) 
                   << 0x24U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7f7fffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [3U] >> 0x1dU)))) 
                   << 0x2fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffffefULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 5U)))) 
                   << 4U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffff7fffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0xbU)))) 
                   << 0xfU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffbffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x11U)))) 
                   << 0x1aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffdfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x17U)))) 
                   << 0x25U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7effffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [4U] >> 0x1dU)))) 
                   << 0x30U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffffdfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 5U)))) 
                   << 5U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffeffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0xbU)))) 
                   << 0x10U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffff7ffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x11U)))) 
                   << 0x1bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffbfffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x17U)))) 
                   << 0x26U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7dffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [5U] >> 0x1dU)))) 
                   << 0x31U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffffbfULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 5U)))) 
                   << 6U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffdffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0xbU)))) 
                   << 0x11U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffefffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x11U)))) 
                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fff7fffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x17U)))) 
                   << 0x27U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7bffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [6U] >> 0x1dU)))) 
                   << 0x32U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffffff7fULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 5U)))) 
                   << 7U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffbffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0xbU)))) 
                   << 0x12U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffdfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x11U)))) 
                   << 0x1dU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffeffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x17U)))) 
                   << 0x28U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x77ffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [7U] >> 0x1dU)))) 
                   << 0x33U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffeffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 5U)))) 
                   << 8U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffff7ffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0xbU)))) 
                   << 0x13U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffbfffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x11U)))) 
                   << 0x1eU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffdffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x17U)))) 
                   << 0x29U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x6fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [8U] >> 0x1dU)))) 
                   << 0x34U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffdffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 5U)))) 
                   << 9U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffefffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0xbU)))) 
                   << 0x14U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffff7fffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x11U)))) 
                   << 0x1fU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffbffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x17U)))) 
                   << 0x2aU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x5fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [9U] >> 0x1dU)))) 
                   << 0x35U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffffffffbffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 5U)))) 
                   << 0xaU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fffffffdfffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0xbU)))) 
                   << 0x15U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffffeffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x11U)))) 
                   << 0x20U));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ff7ffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x17U)))) 
                   << 0x2bU));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x3fffffffffffffULL & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | ((QData)((IData)((1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                          [0xaU] >> 0x1dU)))) 
                   << 0x36U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [1U];
    if (vlSelfRef.ascon_top__DOT__shift_en) {
        if (vlSelfRef.ascon_top__DOT__shift_type) {
            if (vlSelfRef.ascon_top__DOT__last_cycle) {
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfU & vlSelfRef.ascon_top__DOT__recombine_shares))) 
                        << 0x3cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 4U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [2U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                 >> 6U)))) 
                        << 0x3cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 4U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [3U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                 >> 0xcU)))) 
                        << 0x3cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 4U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [4U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                 >> 0x12U)))) 
                        << 0x3cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 4U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                 >> 0x18U)))) 
                        << 0x3cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 4U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
            } else {
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fU & vlSelfRef.ascon_top__DOT__recombine_shares))) 
                        << 0x3aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 6U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [2U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                  >> 6U)))) 
                        << 0x3aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 6U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [3U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                  >> 0xcU)))) 
                        << 0x3aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 6U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [4U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                  >> 0x12U)))) 
                        << 0x3aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 6U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fU & (vlSelfRef.ascon_top__DOT__recombine_shares 
                                                  >> 0x18U)))) 
                        << 0x3aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 6U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
            }
        } else {
            vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[0U])));
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3;
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
            ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                [2U];
            vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[2U])));
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3;
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
            ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                [3U];
            vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[4U])));
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3;
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
            ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                [4U];
            vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[6U])));
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3;
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
            vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[8U])));
            vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3;
        }
    } else if (vlSelfRef.ascon_top__DOT__write_en) {
        vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 
            = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[0U])));
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4;
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [2U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 
            = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[2U])));
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4;
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [3U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 
            = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[4U])));
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4;
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [4U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 
            = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[6U])));
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4;
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 
            = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[9U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_in[8U])));
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4;
    } else {
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [2U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [3U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
        ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
            = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
            [4U];
        vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
            = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    }
}

void Vascon_top___024root___eval_triggers__act(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval_act(Vascon_top___024root* vlSelf);

bool Vascon_top___024root___eval_phase__act(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_phase__act\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vascon_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vascon_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vascon_top___024root___eval_nba(Vascon_top___024root* vlSelf);

bool Vascon_top___024root___eval_phase__nba(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_phase__nba\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vascon_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__ico(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vascon_top___024root___eval_phase__ico(Vascon_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__nba(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__act(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vascon_top___024root___eval(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vascon_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ascon_top.sv", 37, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vascon_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vascon_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ascon_top.sv", 37, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vascon_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ascon_top.sv", 37, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vascon_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vascon_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_debug_assertions\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset_n & 0xfeU)))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY(((vlSelfRef.key_valid & 0xfeU)))) {
        Verilated::overWidthError("key_valid");}
    if (VL_UNLIKELY(((vlSelfRef.valid_data_in & 0xfeU)))) {
        Verilated::overWidthError("valid_data_in");}
    if (VL_UNLIKELY(((vlSelfRef.last_block & 0xfeU)))) {
        Verilated::overWidthError("last_block");}
    if (VL_UNLIKELY(((vlSelfRef.valid_bytes & 0xe0U)))) {
        Verilated::overWidthError("valid_bytes");}
    if (VL_UNLIKELY(((vlSelfRef.EOT & 0xfeU)))) {
        Verilated::overWidthError("EOT");}
    if (VL_UNLIKELY(((vlSelfRef.random_masks[9U] & 0xfffff000U)))) {
        Verilated::overWidthError("random_masks");}
    if (VL_UNLIKELY(((vlSelfRef.random_masks_sbox & 0ULL)))) {
        Verilated::overWidthError("random_masks_sbox");}
}
#endif  // VL_DEBUG
