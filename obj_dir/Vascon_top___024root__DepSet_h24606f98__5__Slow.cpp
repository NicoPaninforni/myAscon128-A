// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__7(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___stl_sequent__TOP__7\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 = 0;
    // Body
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

VL_ATTR_COLD void Vascon_top___024root___eval_triggers__stl(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___eval_stl(Vascon_top___024root* vlSelf);

VL_ATTR_COLD bool Vascon_top___024root___eval_phase__stl(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_phase__stl\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vascon_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vascon_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__ico(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___dump_triggers__ico\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__act(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___dump_triggers__act\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge reset_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__nba(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___dump_triggers__nba\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vascon_top___024root____Vm_traceActivitySetAll(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root____Vm_traceActivitySetAll\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vascon_top___024root___ctor_var_reset(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___ctor_var_reset\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelf->valid_bytes = VL_RAND_RESET_I(4);
    vlSelf->EOT = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(300, vlSelf->random_masks);
    vlSelf->random_masks_sbox = VL_RAND_RESET_Q(55);
    vlSelf->ciphertext_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ciphertext);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->ready_tag = VL_RAND_RESET_I(1);
    vlSelf->tag1 = VL_RAND_RESET_Q(64);
    vlSelf->tag2 = VL_RAND_RESET_Q(64);
    vlSelf->ready_for_data = VL_RAND_RESET_I(1);
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
    vlSelf->ascon_top__DOT__extra_padding = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__shift_enable_sipo = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__last_cycle_sipo = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__round_counter = VL_RAND_RESET_I(4);
    vlSelf->ascon_top__DOT__bit_counter = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_out);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_in);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1);
    VL_RAND_RESET_W(320, vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1);
    vlSelf->ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ascon_top__DOT__rc_block[__Vi0] = VL_RAND_RESET_I(6);
    }
    VL_RAND_RESET_W(330, vlSelf->ascon_top__DOT__shares_out);
    vlSelf->ascon_top__DOT__shares_in = VL_RAND_RESET_I(30);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer_in[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer_out[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ascon_top__DOT__next_sbox_input[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_input[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ascon_top__DOT__sbox_output_unmasked[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ascon_top__DOT__mux_sbox_out[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer2nd_in[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->ascon_top__DOT__affine_layer2nd_out[__Vi0] = VL_RAND_RESET_I(30);
    }
    vlSelf->ascon_top__DOT__recombine_shares = VL_RAND_RESET_I(30);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg_in_absorb[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__data_in_padded);
    VL_RAND_RESET_W(128, vlSelf->ascon_top__DOT__reverse_reg_data_out);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__linear_diffusion_debug[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__unnamedblk1__DOT__p = 0;
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->ascon_top__DOT____Vlvbound_hcf72403f__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound_h95e776b1__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____Vlvbound_h1ea7c5e7__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(192, vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_2_0);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_3 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_5 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_8 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_11 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_12 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_14 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_15 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_17 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_18 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_20 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_21 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_23 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_24 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_26 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_27 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_29 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_30 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_32 = VL_RAND_RESET_I(6);
    vlSelf->ascon_top__DOT____VdfgRegularize_h0932e10f_3_33 = VL_RAND_RESET_I(6);
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
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg__DOT__state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__state_reg__DOT__next_state[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__3 = VL_RAND_RESET_Q(64);
    vlSelf->ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__4 = VL_RAND_RESET_Q(64);
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
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(121, vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xi = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__xiprox2 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__not_xiprox1 = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(11);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6042fdd8__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h50f15c30__1 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h0c5d65aa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 = VL_RAND_RESET_I(1);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__x);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__x);
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__32__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__32__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__33__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__33__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__34__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__34__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__35__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__35__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__36__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__36__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__37__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__37__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__38__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__38__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__39__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__39__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__40__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__40__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__41__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__rotr64__41__x = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__45__num = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__xor_tree__46__num = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__in = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__N = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk8__DOT__i = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(11);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__level = 0;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__xor_tree__47__num = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
