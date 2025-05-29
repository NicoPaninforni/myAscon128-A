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
