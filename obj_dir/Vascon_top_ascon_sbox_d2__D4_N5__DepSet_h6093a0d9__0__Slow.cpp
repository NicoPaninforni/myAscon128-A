// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top_ascon_sbox_d2__D4_N5.h"

VL_ATTR_COLD void Vascon_top_ascon_sbox_d2__D4_N5___ctor_var_reset(Vascon_top_ascon_sbox_d2__D4_N5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2__D4_N5___ctor_var_reset\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->x_in = VL_RAND_RESET_I(25);
    vlSelf->fresh_r = VL_RAND_RESET_I(10);
    vlSelf->x_out = VL_RAND_RESET_I(25);
    vlSelf->x_out_noMask = VL_RAND_RESET_I(25);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__x[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__and_result_bank[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__and_result_reg[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__y[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__y_noMask[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__PVT__unnamedblk1__DOT__fresh_idx = 0;
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi = VL_RAND_RESET_I(5);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0;
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk7__DOT__i = 0;
    vlSelf->__PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp = VL_RAND_RESET_I(5);
    vlSelf->__Vlvbound_hf570816d__0 = VL_RAND_RESET_I(25);
    vlSelf->__Vlvbound_h2543d2aa__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h914e6002__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h2543d2aa__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_hb49a3744__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h2db25a5e__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h593c59e9__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h4fe11655__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_xor_tree__0__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__1__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__2__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__3__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__4__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__5__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__6__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__7__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__8__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__9__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__10__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__11__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->__Vfunc_xor_tree__12__unnamedblk9__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(5);
    }
}
