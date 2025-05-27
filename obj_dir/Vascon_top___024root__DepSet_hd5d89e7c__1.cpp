// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__act(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vascon_top___024root___eval_triggers__act(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_triggers__act\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.reset_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vascon_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vascon_top___024root___nba_sequent__TOP__0(Vascon_top___024root* vlSelf);
void Vascon_top___024root___nba_sequent__TOP__1(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top___024root___nba_sequent__TOP__2(Vascon_top___024root* vlSelf);
void Vascon_top___024root___nba_comb__TOP__0(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);
void Vascon_top___024root___ico_sequent__TOP__1(Vascon_top___024root* vlSelf);
void Vascon_top___024root___ico_sequent__TOP__2(Vascon_top___024root* vlSelf);

void Vascon_top___024root___eval_nba(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_nba\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vascon_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vascon_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___nba_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vascon_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2__D3_N4___ico_sequent__TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top___024root___ico_sequent__TOP__1(vlSelf);
        Vascon_top___024root___ico_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vascon_top___024root___nba_sequent__TOP__2(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_sequent__TOP__2\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ascon_top__DOT__sbox_output[0U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[1U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[2U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[3U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[4U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[5U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[6U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[7U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[8U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[9U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 0xcU)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 8U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 4U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xaU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 0xcU)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 8U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 4U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xbU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 0xcU)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 8U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 4U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xcU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 0xcU)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 8U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 4U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
}
