// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2.h"

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xbU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xbU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xbU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xbU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xbU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xcU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xcU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xdU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xdU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xeU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xeU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xfU] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xfU] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xfU] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0xfU] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0xfU]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x10U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x10U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x10U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x10U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x10U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x11U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x11U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x11U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x11U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x11U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x12U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x12U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x12U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x12U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x12U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x13U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x13U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x13U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x13U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x13U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x14U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x14U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x14U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x14U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x14U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}

VL_INLINE_OPT void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vlvbound_h05a7867c__0;
    __Vlvbound_h05a7867c__0 = 0;
    CData/*0:0*/ __Vlvbound_h02d24439__0;
    __Vlvbound_h02d24439__0 = 0;
    CData/*0:0*/ __Vlvbound_h05a7867c__1;
    __Vlvbound_h05a7867c__1 = 0;
    CData/*0:0*/ __Vlvbound_hfc530b72__0;
    __Vlvbound_hfc530b72__0 = 0;
    // Body
    vlSelfRef.__PVT__x[4U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x15U] >> 0xcU));
    vlSelfRef.__PVT__x[3U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x15U] >> 9U));
    vlSelfRef.__PVT__x[2U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x15U] >> 6U));
    vlSelfRef.__PVT__x[1U] = (7U & (vlSymsp->TOP.ascon_top__DOT__sbox_input
                                    [0x15U] >> 3U));
    vlSelfRef.__PVT__x[0U] = (7U & vlSymsp->TOP.ascon_top__DOT__sbox_input
                              [0x15U]);
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[0U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [0U]);
    vlSelfRef.__PVT__y_noMask[0U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 4U));
    vlSelfRef.__PVT__y_noMask[0U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[0U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [0U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [0U] >> 8U));
    vlSelfRef.__PVT__y_noMask[0U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [0U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[1U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [1U]);
    vlSelfRef.__PVT__y_noMask[1U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 4U));
    vlSelfRef.__PVT__y_noMask[1U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[1U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [1U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [1U] >> 8U));
    vlSelfRef.__PVT__y_noMask[1U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [1U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[2U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[2U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [2U]);
    vlSelfRef.__PVT__y_noMask[2U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 4U));
    vlSelfRef.__PVT__y_noMask[2U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[2U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [2U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [2U] >> 8U));
    vlSelfRef.__PVT__y_noMask[2U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [2U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[3U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[3U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [3U]);
    vlSelfRef.__PVT__y_noMask[3U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 4U));
    vlSelfRef.__PVT__y_noMask[3U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[3U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [3U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [3U] >> 8U));
    vlSelfRef.__PVT__y_noMask[3U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [3U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelfRef.__PVT__x[4U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelfRef.__PVT__x[0U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelfRef.__PVT__x[1U];
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelfRef.__PVT__and_result_bank[4U] = 0U;
    __Vlvbound_h05a7867c__0 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1feU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | (IData)(__Vlvbound_h05a7867c__0));
    __Vlvbound_h02d24439__0 = (1U & vlSelfRef.__PVT__and_result_bank
                               [4U]);
    vlSelfRef.__PVT__y_noMask[4U] = ((6U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | (IData)(__Vlvbound_h02d24439__0));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & (IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 1U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fdU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 1U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1f7U 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 3U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 1U));
    __Vlvbound_h05a7867c__1 = (1U & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                      & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                         >> 2U)) ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1fbU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 2U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1bfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 6U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 1U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1efU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 4U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 4U));
    vlSelfRef.__PVT__y_noMask[4U] = ((5U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 1U));
    vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r 
        = (1U & ((IData)(vlSymsp->TOP.ascon_top__DOT__fresh_r) 
                 >> 2U));
    __Vlvbound_h05a7867c__1 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 1U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 2U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x1dfU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__1) 
                                               << 5U));
    __Vlvbound_hfc530b72__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       >> 2U) & ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                                                 >> 1U)) 
                                     ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r)));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0x17fU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_hfc530b72__0) 
                                               << 7U));
    __Vlvbound_h05a7867c__0 = (1U & ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                                       & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                                      ^ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                                     >> 2U));
    vlSelfRef.__PVT__and_result_bank[4U] = ((0xffU 
                                             & vlSelfRef.__PVT__and_result_bank
                                             [4U]) 
                                            | ((IData)(__Vlvbound_h05a7867c__0) 
                                               << 8U));
    __Vlvbound_h02d24439__0 = (1U & (vlSelfRef.__PVT__and_result_bank
                                     [4U] >> 8U));
    vlSelfRef.__PVT__y_noMask[4U] = ((3U & vlSelfRef.__PVT__y_noMask
                                      [4U]) | ((IData)(__Vlvbound_h02d24439__0) 
                                               << 2U));
}
