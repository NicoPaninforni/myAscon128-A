// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__ico(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vascon_top___024root___eval_triggers__ico(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_triggers__ico\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vascon_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

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
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__0(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top___024root___nba_sequent__TOP__1(Vascon_top___024root* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__1(Vascon_top_ascon_sbox_d2* vlSelf);
void Vascon_top___024root___nba_sequent__TOP__2(Vascon_top___024root* vlSelf);
void Vascon_top___024root___nba_comb__TOP__0(Vascon_top___024root* vlSelf);
void Vascon_top___024root___nba_comb__TOP__1(Vascon_top___024root* vlSelf);
void Vascon_top___024root___nba_comb__TOP__2(Vascon_top___024root* vlSelf);

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
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__0((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
        Vascon_top___024root___nba_sequent__TOP__1(vlSelf);
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox));
        Vascon_top_ascon_sbox_d2___nba_sequent__TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox__1((&vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox));
        Vascon_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vascon_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
        Vascon_top___024root___nba_comb__TOP__1(vlSelf);
        Vascon_top___024root___nba_comb__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vascon_top___024root___nba_sequent__TOP__1(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_sequent__TOP__1\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*14:0*/ ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v0;
    __VdlyVal__ascon_top__DOT__sbox_input__v0 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v1;
    __VdlyVal__ascon_top__DOT__sbox_input__v1 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v2;
    __VdlyVal__ascon_top__DOT__sbox_input__v2 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v3;
    __VdlyVal__ascon_top__DOT__sbox_input__v3 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v4;
    __VdlyVal__ascon_top__DOT__sbox_input__v4 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v5;
    __VdlyVal__ascon_top__DOT__sbox_input__v5 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v6;
    __VdlyVal__ascon_top__DOT__sbox_input__v6 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v7;
    __VdlyVal__ascon_top__DOT__sbox_input__v7 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v8;
    __VdlyVal__ascon_top__DOT__sbox_input__v8 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v9;
    __VdlyVal__ascon_top__DOT__sbox_input__v9 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v10;
    __VdlyVal__ascon_top__DOT__sbox_input__v10 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v11;
    __VdlyVal__ascon_top__DOT__sbox_input__v11 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v12;
    __VdlyVal__ascon_top__DOT__sbox_input__v12 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v13;
    __VdlyVal__ascon_top__DOT__sbox_input__v13 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v14;
    __VdlyVal__ascon_top__DOT__sbox_input__v14 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v15;
    __VdlyVal__ascon_top__DOT__sbox_input__v15 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v16;
    __VdlyVal__ascon_top__DOT__sbox_input__v16 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v17;
    __VdlyVal__ascon_top__DOT__sbox_input__v17 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v18;
    __VdlyVal__ascon_top__DOT__sbox_input__v18 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v19;
    __VdlyVal__ascon_top__DOT__sbox_input__v19 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v20;
    __VdlyVal__ascon_top__DOT__sbox_input__v20 = 0;
    SData/*14:0*/ __VdlyVal__ascon_top__DOT__sbox_input__v21;
    __VdlyVal__ascon_top__DOT__sbox_input__v21 = 0;
    QData/*63:0*/ __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v0;
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v0 = 0;
    QData/*63:0*/ __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v1;
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v1 = 0;
    QData/*63:0*/ __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v2;
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v2 = 0;
    QData/*63:0*/ __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v3;
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v3 = 0;
    QData/*63:0*/ __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v4;
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v4 = 0;
    // Body
    vlSelfRef.ascon_top__DOT__unnamedblk1__DOT__p = 0x16U;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i = 5U;
    vlSelfRef.ascon_top__DOT__sbox_output[0U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[1U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[2U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[3U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[4U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[5U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[6U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[7U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[8U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[9U] = (((
                                                   vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                   [4U] 
                                                   << 0xcU) 
                                                  | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                     [3U] 
                                                     << 9U)) 
                                                 | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                     [2U] 
                                                     << 6U) 
                                                    | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                        [1U] 
                                                        << 3U) 
                                                       | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y
                                                       [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xaU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xbU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xcU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xdU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xeU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0xfU] = (
                                                   ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                     [4U] 
                                                     << 0xcU) 
                                                    | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                       [3U] 
                                                       << 9U)) 
                                                   | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                       [2U] 
                                                       << 6U) 
                                                      | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                          [1U] 
                                                          << 3U) 
                                                         | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y
                                                         [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x10U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x11U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x12U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x13U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x14U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output[0x15U] = 
        (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
           [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                            [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                             [2U] << 6U) 
                                            | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                                [1U] 
                                                << 3U) 
                                               | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y
                                               [0U])));
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state
        [0U];
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v0 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state
        [1U];
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v1 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state
        [2U];
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v2 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state
        [3U];
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v3 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__next_state
        [4U];
    __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v4 
        = ascon_top__DOT__state_reg__DOT____Vlvbound_hf887d9d8__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0U];
    __VdlyVal__ascon_top__DOT__sbox_input__v0 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [1U];
    __VdlyVal__ascon_top__DOT__sbox_input__v1 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [2U];
    __VdlyVal__ascon_top__DOT__sbox_input__v2 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [3U];
    __VdlyVal__ascon_top__DOT__sbox_input__v3 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [4U];
    __VdlyVal__ascon_top__DOT__sbox_input__v4 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [5U];
    __VdlyVal__ascon_top__DOT__sbox_input__v5 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [6U];
    __VdlyVal__ascon_top__DOT__sbox_input__v6 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [7U];
    __VdlyVal__ascon_top__DOT__sbox_input__v7 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [8U];
    __VdlyVal__ascon_top__DOT__sbox_input__v8 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [9U];
    __VdlyVal__ascon_top__DOT__sbox_input__v9 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xaU];
    __VdlyVal__ascon_top__DOT__sbox_input__v10 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xbU];
    __VdlyVal__ascon_top__DOT__sbox_input__v11 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xcU];
    __VdlyVal__ascon_top__DOT__sbox_input__v12 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xdU];
    __VdlyVal__ascon_top__DOT__sbox_input__v13 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xeU];
    __VdlyVal__ascon_top__DOT__sbox_input__v14 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0xfU];
    __VdlyVal__ascon_top__DOT__sbox_input__v15 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x10U];
    __VdlyVal__ascon_top__DOT__sbox_input__v16 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x11U];
    __VdlyVal__ascon_top__DOT__sbox_input__v17 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x12U];
    __VdlyVal__ascon_top__DOT__sbox_input__v18 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x13U];
    __VdlyVal__ascon_top__DOT__sbox_input__v19 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x14U];
    __VdlyVal__ascon_top__DOT__sbox_input__v20 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    ascon_top__DOT____Vlvbound_h14ba0565__0 = vlSelfRef.ascon_top__DOT__next_sbox_input
        [0x15U];
    __VdlyVal__ascon_top__DOT__sbox_input__v21 = ascon_top__DOT____Vlvbound_h14ba0565__0;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__state[0U] 
        = __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v0;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__state[1U] 
        = __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v1;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__state[2U] 
        = __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v2;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__state[3U] 
        = __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v3;
    vlSelfRef.ascon_top__DOT__state_reg__DOT__state[4U] 
        = __VdlyVal__ascon_top__DOT__state_reg__DOT__state__v4;
    vlSelfRef.ascon_top__DOT__sbox_input[0U] = __VdlyVal__ascon_top__DOT__sbox_input__v0;
    vlSelfRef.ascon_top__DOT__sbox_input[1U] = __VdlyVal__ascon_top__DOT__sbox_input__v1;
    vlSelfRef.ascon_top__DOT__sbox_input[2U] = __VdlyVal__ascon_top__DOT__sbox_input__v2;
    vlSelfRef.ascon_top__DOT__sbox_input[3U] = __VdlyVal__ascon_top__DOT__sbox_input__v3;
    vlSelfRef.ascon_top__DOT__sbox_input[4U] = __VdlyVal__ascon_top__DOT__sbox_input__v4;
    vlSelfRef.ascon_top__DOT__sbox_input[5U] = __VdlyVal__ascon_top__DOT__sbox_input__v5;
    vlSelfRef.ascon_top__DOT__sbox_input[6U] = __VdlyVal__ascon_top__DOT__sbox_input__v6;
    vlSelfRef.ascon_top__DOT__sbox_input[7U] = __VdlyVal__ascon_top__DOT__sbox_input__v7;
    vlSelfRef.ascon_top__DOT__sbox_input[8U] = __VdlyVal__ascon_top__DOT__sbox_input__v8;
    vlSelfRef.ascon_top__DOT__sbox_input[9U] = __VdlyVal__ascon_top__DOT__sbox_input__v9;
    vlSelfRef.ascon_top__DOT__sbox_input[0xaU] = __VdlyVal__ascon_top__DOT__sbox_input__v10;
    vlSelfRef.ascon_top__DOT__sbox_input[0xbU] = __VdlyVal__ascon_top__DOT__sbox_input__v11;
    vlSelfRef.ascon_top__DOT__sbox_input[0xcU] = __VdlyVal__ascon_top__DOT__sbox_input__v12;
    vlSelfRef.ascon_top__DOT__sbox_input[0xdU] = __VdlyVal__ascon_top__DOT__sbox_input__v13;
    vlSelfRef.ascon_top__DOT__sbox_input[0xeU] = __VdlyVal__ascon_top__DOT__sbox_input__v14;
    vlSelfRef.ascon_top__DOT__sbox_input[0xfU] = __VdlyVal__ascon_top__DOT__sbox_input__v15;
    vlSelfRef.ascon_top__DOT__sbox_input[0x10U] = __VdlyVal__ascon_top__DOT__sbox_input__v16;
    vlSelfRef.ascon_top__DOT__sbox_input[0x11U] = __VdlyVal__ascon_top__DOT__sbox_input__v17;
    vlSelfRef.ascon_top__DOT__sbox_input[0x12U] = __VdlyVal__ascon_top__DOT__sbox_input__v18;
    vlSelfRef.ascon_top__DOT__sbox_input[0x13U] = __VdlyVal__ascon_top__DOT__sbox_input__v19;
    vlSelfRef.ascon_top__DOT__sbox_input[0x14U] = __VdlyVal__ascon_top__DOT__sbox_input__v20;
    vlSelfRef.ascon_top__DOT__sbox_input[0x15U] = __VdlyVal__ascon_top__DOT__sbox_input__v21;
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelfRef.ascon_top__DOT__state_reg_out[0U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[1U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelfRef.ascon_top__DOT__state_reg_out[2U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[3U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelfRef.ascon_top__DOT__state_reg_out[4U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[5U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelfRef.ascon_top__DOT__state_reg_out[6U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[7U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelfRef.ascon_top__DOT__state_reg_out[8U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[9U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    vlSelfRef.debug_state_2 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
    vlSelfRef.debug_state_3 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
    vlSelfRef.debug_state_4 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
    vlSelfRef.debug_state_0 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
    vlSelfRef.debug_state_1 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[0U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x, 0x13U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x, 0x2dU));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x, 0x1cU) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x, 0x24U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[2U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x, 0x3dU) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x, 3U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x, 0x27U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x, 0x19U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[2U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[4U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x, 1U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x, 0x3fU));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x, 6U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x, 0x3aU));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[3U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[6U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x, 0xaU) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x, 0x36U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x, 0x11U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x, 0x2fU));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[4U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[8U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x, 7U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x, 0x39U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x, 0x29U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x, 0x17U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__Vfuncout));
    vlSelfRef.ascon_top__DOT__fresh_r = ((4U & (vlSelfRef.ascon_top__DOT__state_reg_out[1U] 
                                                >> 1U)) 
                                         | ((2U & (
                                                   vlSelfRef.ascon_top__DOT__state_reg_out[1U] 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.ascon_top__DOT__state_reg_out[0U] 
                                                >> 0xbU))));
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[2U] 
        = vlSelfRef.debug_state_2;
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[3U] 
        = vlSelfRef.debug_state_3;
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[4U] 
        = vlSelfRef.debug_state_4;
    vlSelfRef.debug_linear_diffusion_state3 = vlSelfRef.ascon_top__DOT__linear_diffusion_debug
        [3U];
    vlSelfRef.debug_linear_diffusion_state4 = vlSelfRef.ascon_top__DOT__linear_diffusion_debug
        [4U];
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [0U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [0U] >> 0x20U));
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [1U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [1U] >> 0x20U));
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [2U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [2U] >> 0x20U));
}

VL_INLINE_OPT void Vascon_top___024root___nba_sequent__TOP__2(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_sequent__TOP__2\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[1U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[2U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[3U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[4U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[5U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[6U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[7U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[8U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[9U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xaU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xbU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xcU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xdU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xeU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0xfU] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x10U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x11U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x12U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x13U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x14U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
    vlSelfRef.ascon_top__DOT__sbox_output_unmasked[0x15U] 
        = (((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
             [4U] << 0xcU) | (vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                              [3U] << 9U)) | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                               [2U] 
                                               << 6U) 
                                              | ((vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSymsp->TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox.__PVT__y_noMask
                                                 [0U])));
}
