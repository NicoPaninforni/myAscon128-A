// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_INLINE_OPT void Vascon_top___024root___nba_comb__TOP__2(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_comb__TOP__2\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he1a995c6__0;
    ascon_top__DOT____Vlvbound_he1a995c6__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hcf01ca49__0;
    ascon_top__DOT____Vlvbound_hcf01ca49__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h60cff33f__0;
    ascon_top__DOT____Vlvbound_h60cff33f__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h272d74fa__0;
    ascon_top__DOT____Vlvbound_h272d74fa__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h825e8ae0__0;
    ascon_top__DOT____Vlvbound_h825e8ae0__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h6e327aa5__0;
    ascon_top__DOT____Vlvbound_h6e327aa5__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h477093c8__0;
    ascon_top__DOT____Vlvbound_h477093c8__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he6e69b9d__0;
    ascon_top__DOT____Vlvbound_he6e69b9d__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__101__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__101__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__102__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__in;
    __Vfunc_ascon_top__DOT__xor_tree__102__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__N;
    __Vfunc_ascon_top__DOT__xor_tree__102__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__level;
    __Vfunc_ascon_top__DOT__xor_tree__102__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__102__num;
    __Vfunc_ascon_top__DOT__xor_tree__102__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__103__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__in;
    __Vfunc_ascon_top__DOT__xor_tree__103__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__N;
    __Vfunc_ascon_top__DOT__xor_tree__103__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__level;
    __Vfunc_ascon_top__DOT__xor_tree__103__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__103__num;
    __Vfunc_ascon_top__DOT__xor_tree__103__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__104__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__in;
    __Vfunc_ascon_top__DOT__xor_tree__104__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__N;
    __Vfunc_ascon_top__DOT__xor_tree__104__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__level;
    __Vfunc_ascon_top__DOT__xor_tree__104__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__104__num;
    __Vfunc_ascon_top__DOT__xor_tree__104__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__105__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__in;
    __Vfunc_ascon_top__DOT__xor_tree__105__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__N;
    __Vfunc_ascon_top__DOT__xor_tree__105__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__level;
    __Vfunc_ascon_top__DOT__xor_tree__105__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__105__num;
    __Vfunc_ascon_top__DOT__xor_tree__105__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__106__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__in;
    __Vfunc_ascon_top__DOT__xor_tree__106__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__N;
    __Vfunc_ascon_top__DOT__xor_tree__106__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__level;
    __Vfunc_ascon_top__DOT__xor_tree__106__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__106__num;
    __Vfunc_ascon_top__DOT__xor_tree__106__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__107__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__in;
    __Vfunc_ascon_top__DOT__xor_tree__107__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__N;
    __Vfunc_ascon_top__DOT__xor_tree__107__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__level;
    __Vfunc_ascon_top__DOT__xor_tree__107__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__107__num;
    __Vfunc_ascon_top__DOT__xor_tree__107__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__108__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__in;
    __Vfunc_ascon_top__DOT__xor_tree__108__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__N;
    __Vfunc_ascon_top__DOT__xor_tree__108__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__level;
    __Vfunc_ascon_top__DOT__xor_tree__108__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__108__num;
    __Vfunc_ascon_top__DOT__xor_tree__108__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__109__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__in;
    __Vfunc_ascon_top__DOT__xor_tree__109__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__N;
    __Vfunc_ascon_top__DOT__xor_tree__109__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__level;
    __Vfunc_ascon_top__DOT__xor_tree__109__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__109__num;
    __Vfunc_ascon_top__DOT__xor_tree__109__num = 0;
    // Body
    __Vfunc_ascon_top__DOT__xor_tree__101__Vfuncout 
        = ((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__101__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__101__stage
               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__101__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3fdfU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__101__Vfuncout) 
                         << 5U)));
    ascon_top__DOT____Vlvbound_he1a995c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he1a995c6__0));
    ascon_top__DOT____Vlvbound_he1a995c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he1a995c6__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he1a995c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he1a995c6__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__102__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__102__in = vlSelfRef.ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__102__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__102__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__102__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__102__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__102__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__102__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__102__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__102__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__102__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__102__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__102__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__102__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__102__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__102__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__102__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__102__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__102__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__102__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__102__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__102__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__102__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__102__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__102__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__102__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__102__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__102__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3fbfU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__102__Vfuncout) 
                         << 6U)));
    ascon_top__DOT____Vlvbound_hcf01ca49__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hcf01ca49__0));
    ascon_top__DOT____Vlvbound_hcf01ca49__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcf01ca49__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hcf01ca49__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcf01ca49__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__103__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__103__in = vlSelfRef.ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__103__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__103__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__103__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__103__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__103__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__103__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__103__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__103__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__103__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__103__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__103__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__103__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__103__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__103__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__103__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__103__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__103__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__103__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__103__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__103__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__103__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__103__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__103__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__103__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__103__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__103__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3f7fU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__103__Vfuncout) 
                         << 7U)));
    ascon_top__DOT____Vlvbound_h60cff33f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h60cff33f__0));
    ascon_top__DOT____Vlvbound_h60cff33f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h60cff33f__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h60cff33f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h60cff33f__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__104__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__104__in = vlSelfRef.ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__104__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__104__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__104__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__104__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__104__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__104__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__104__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__104__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__104__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__104__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__104__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__104__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__104__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__104__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__104__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__104__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__104__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__104__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__104__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__104__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__104__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__104__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__104__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__104__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__104__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__104__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3effU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__104__Vfuncout) 
                         << 8U)));
    ascon_top__DOT____Vlvbound_h272d74fa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h272d74fa__0));
    ascon_top__DOT____Vlvbound_h272d74fa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h272d74fa__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h272d74fa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h272d74fa__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__105__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__105__in = vlSelfRef.ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__105__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__105__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__105__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__105__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__105__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__105__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__105__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__105__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__105__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__105__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__105__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__105__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__105__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__105__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__105__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__105__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__105__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__105__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__105__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__105__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__105__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__105__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__105__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__105__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__105__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__105__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3dffU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__105__Vfuncout) 
                         << 9U)));
    ascon_top__DOT____Vlvbound_h825e8ae0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h825e8ae0__0));
    ascon_top__DOT____Vlvbound_h825e8ae0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h825e8ae0__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h825e8ae0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h825e8ae0__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__106__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__106__in = vlSelfRef.ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__106__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__106__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__106__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__106__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__106__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__106__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__106__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__106__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__106__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__106__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__106__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__106__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__106__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__106__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__106__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__106__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__106__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__106__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__106__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__106__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__106__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__106__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__106__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__106__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__106__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__106__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3bffU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__106__Vfuncout) 
                         << 0xaU)));
    ascon_top__DOT____Vlvbound_h6e327aa5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h6e327aa5__0));
    ascon_top__DOT____Vlvbound_h6e327aa5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6e327aa5__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h6e327aa5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6e327aa5__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__107__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__107__in = vlSelfRef.ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__107__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__107__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__107__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__107__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__107__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__107__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__107__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__107__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__107__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__107__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__107__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__107__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__107__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__107__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__107__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__107__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__107__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__107__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__107__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__107__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__107__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__107__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__107__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__107__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__107__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__107__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x37ffU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__107__Vfuncout) 
                         << 0xbU)));
    ascon_top__DOT____Vlvbound_h477093c8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h477093c8__0));
    ascon_top__DOT____Vlvbound_h477093c8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h477093c8__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h477093c8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h477093c8__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__108__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__108__in = vlSelfRef.ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__108__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__108__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__108__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__108__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__108__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__108__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__108__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__108__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__108__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__108__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__108__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__108__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__108__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__108__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__108__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__108__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__108__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__108__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__108__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__108__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__108__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__108__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__108__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__108__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__108__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__108__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x2fffU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__108__Vfuncout) 
                         << 0xcU)));
    ascon_top__DOT____Vlvbound_he6e69b9d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he6e69b9d__0));
    ascon_top__DOT____Vlvbound_he6e69b9d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he6e69b9d__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he6e69b9d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he6e69b9d__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__109__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__109__in = vlSelfRef.ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__109__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__109__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__109__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__109__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__109__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__109__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__109__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__109__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__109__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__109__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__109__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__109__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__109__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__109__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__109__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + __Vfunc_ascon_top__DOT__xor_tree__109__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__109__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__109__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__109__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__109__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__109__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__109__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__109__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__109__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__109__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__109__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x1fffU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__109__Vfuncout) 
                         << 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [0U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (2U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [1U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (4U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [2U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x200U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [0U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1bU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x400U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [1U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][3U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][3U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1cU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x1bU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x800U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [2U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][3U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (8U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [0U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x10U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [1U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x20U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [2U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x1000U & vlSelfRef.ascon_top__DOT__affine_layer_out
                        [0U][3U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x2000U & vlSelfRef.ascon_top__DOT__affine_layer_out
                        [1U][3U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 1U)));
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
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__recombine_shares[0U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 0x14U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [2U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
                                           << 0xaU) 
                                          | (vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
                                             >> 0x16U))))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 0x14U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [3U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
                                         >> 0xcU))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 0x14U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [4U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfffffU & 
                                         (vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
                                          >> 2U)))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 0x14U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1 
                    = (((QData)((IData)((0xfffffU & 
                                         ((vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
                                           >> 0x18U))))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 0x14U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__1;
            } else {
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__recombine_shares[0U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [0U] >> 0x16U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[0U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [2U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
                                               >> 0x16U))))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [1U] >> 0x16U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[1U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [3U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
                                             << 0x14U) 
                                            | (vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
                                               >> 0xcU))))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [2U] >> 0x16U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[2U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                    [4U];
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fffffU 
                                         & (vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
                                            >> 2U)))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [3U] >> 0x16U));
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[3U] 
                    = vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2;
                vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state[4U] 
                    = ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
                vlSelfRef.ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__2 
                    = (((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
                                             << 8U) 
                                            | (vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
                                               >> 0x18U))))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__state_reg__DOT__state
                                     [4U] >> 0x16U));
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
    if (VL_UNLIKELY(((vlSelfRef.valid_bytes & 0xf0U)))) {
        Verilated::overWidthError("valid_bytes");}
    if (VL_UNLIKELY(((vlSelfRef.EOT & 0xfeU)))) {
        Verilated::overWidthError("EOT");}
    if (VL_UNLIKELY(((vlSelfRef.random_masks[6U] & 0xf0000000U)))) {
        Verilated::overWidthError("random_masks");}
    if (VL_UNLIKELY(((vlSelfRef.random_masks_sbox & 0xf8U)))) {
        Verilated::overWidthError("random_masks_sbox");}
}
#endif  // VL_DEBUG
