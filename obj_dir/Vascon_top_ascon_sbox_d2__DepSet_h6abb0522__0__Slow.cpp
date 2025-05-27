// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top_ascon_sbox_d2.h"

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2___ctor_var_reset(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___ctor_var_reset\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->x_in = VL_RAND_RESET_I(15);
    vlSelf->fresh_r = VL_RAND_RESET_I(3);
    vlSelf->sel_masked_round = VL_RAND_RESET_I(1);
    vlSelf->x_out = VL_RAND_RESET_I(15);
    vlSelf->x_out_noMask = VL_RAND_RESET_I(15);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__x[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__and_result_bank[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__and_result_reg[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__y[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__y_noMask[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(3);
    vlSelf->__Vlvbound_heb392477__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hf00c1e9a__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h56f822d7__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_xor_tree__0__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__1__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__2__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__13__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__14__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__15__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__16__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__17__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__18__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__19__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__20__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_xor_tree__21__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
}
