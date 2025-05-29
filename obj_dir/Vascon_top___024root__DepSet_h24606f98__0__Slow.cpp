// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_ATTR_COLD void Vascon_top___024root___eval_static(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_static\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
}

VL_ATTR_COLD void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_initial\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vascon_top___024root___eval_final(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_final\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__stl(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vascon_top___024root___eval_phase__stl(Vascon_top___024root* vlSelf);

VL_ATTR_COLD void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_settle\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vascon_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ascon_top.sv", 37, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vascon_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__stl(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___dump_triggers__stl\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__0(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root____Vm_traceActivitySetAll(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__1(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__2(Vascon_top___024root* vlSelf);
void Vascon_top___024root___ico_sequent__TOP__1(Vascon_top___024root* vlSelf);
void Vascon_top___024root___ico_sequent__TOP__2(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__5(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__6(Vascon_top___024root* vlSelf);
VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__7(Vascon_top___024root* vlSelf);

VL_ATTR_COLD void Vascon_top___024root___eval_stl(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_stl\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vascon_top___024root___stl_sequent__TOP__0(vlSelf);
        Vascon_top___024root____Vm_traceActivitySetAll(vlSelf);
        Vascon_top___024root___stl_sequent__TOP__1(vlSelf);
        Vascon_top___024root___stl_sequent__TOP__2(vlSelf);
        Vascon_top___024root___ico_sequent__TOP__1(vlSelf);
        Vascon_top___024root___ico_sequent__TOP__2(vlSelf);
        Vascon_top___024root___stl_sequent__TOP__5(vlSelf);
        Vascon_top___024root___stl_sequent__TOP__6(vlSelf);
        Vascon_top___024root___stl_sequent__TOP__7(vlSelf);
    }
}

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__0(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___stl_sequent__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.done = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 0U;
    vlSelfRef.ascon_top__DOT__reg_key1_load = 0U;
    vlSelfRef.ascon_top__DOT__reg_key2_load = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0U;
    vlSelfRef.debug_bitcounter = vlSelfRef.ascon_top__DOT__bit_counter;
    vlSelfRef.debug_roundcounter = vlSelfRef.ascon_top__DOT__round_counter;
    vlSelfRef.debug_state = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state;
    vlSelfRef.debug_round_state_0 = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelfRef.debug_round_state_1 = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelfRef.debug_round_state_2 = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelfRef.debug_round_state_3 = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelfRef.debug_round_state_4 = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelfRef.ready_for_data = 0U;
    vlSelfRef.ciphertext_valid = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 0U;
    vlSelfRef.ready_tag = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round = 0xcU;
    vlSelfRef.ascon_top__DOT__extra_padding = 0U;
    vlSelfRef.ascon_top__DOT__last_cycle = 0U;
    vlSelfRef.ascon_top__DOT__shift_en = 0U;
    vlSelfRef.ascon_top__DOT__write_en = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 0U;
    vlSelfRef.ascon_top__DOT__sel_xor_signal = 0U;
    vlSelfRef.ascon_top__DOT__sel_absorb_data = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    vlSelfRef.ascon_top__DOT__sel_init_load = 0U;
    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 0U;
    vlSelfRef.ascon_top__DOT__last_cycle_sipo = 0U;
    vlSelfRef.ascon_top__DOT__shift_type = 0U;
    if ((0x10U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.done = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                        if (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U)))) {
                            vlSelfRef.ready_tag = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                } else {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((0xaU == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                    vlSelfRef.ascon_top__DOT__shift_type = 1U;
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                                      & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                            vlSelfRef.ascon_top__DOT__write_en = 1U;
                        }
                    } else {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                } else {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                        vlSelfRef.ascon_top__DOT__shift_en = 1U;
                        vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if (vlSelfRef.last_block) {
                            if (((~ (IData)(vlSelfRef.debug_extra_padding_ff)) 
                                 & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                                vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__shift_en = 1U;
                        vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                        if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                                      & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                            vlSelfRef.ascon_top__DOT__write_en = 1U;
                        }
                    }
                } else {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((0xaU == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__shift_type = 1U;
                }
            }
        }
    }
    vlSelfRef.ascon_top__DOT__sel_padding = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__reg_key1_load = 1U;
                        vlSelfRef.ascon_top__DOT__reg_key2_load = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_xor_signal = 1U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & ((~ (IData)(vlSelfRef.valid_data_in)) 
                                   & (~ (IData)(vlSelfRef.debug_extra_padding_ff))))) {
                            vlSelfRef.ready_for_data = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__sel_absorb_data = 1U;
                        if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                                      & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                            vlSelfRef.ciphertext_valid = 1U;
                            if (vlSelfRef.debug_extra_padding_ff) {
                                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                vlSelfRef.ascon_top__DOT__sel_init_load = 1U;
                                vlSelfRef.ascon_top__DOT__sel_padding = 1U;
                            } else if (vlSelfRef.EOT) {
                                if (VL_GTS_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                                    vlSelfRef.ascon_top__DOT__sel_init_load = 1U;
                                    vlSelfRef.ascon_top__DOT__sel_padding = 1U;
                                }
                                if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                }
                            }
                            if ((1U & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))) {
                                if (vlSelfRef.EOT) {
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                                    if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                        vlSelfRef.ascon_top__DOT__extra_padding = 1U;
                                    }
                                }
                                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                            vlSelfRef.ascon_top__DOT__sel_absorb_data = 1U;
                        }
                    } else if (vlSelfRef.last_block) {
                        if (((~ (IData)(vlSelfRef.debug_extra_padding_ff)) 
                             & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((1U & ((~ (IData)(vlSelfRef.valid_data_in)) 
                                   & (~ (IData)(vlSelfRef.debug_extra_padding_ff))))) {
                            vlSelfRef.ready_for_data = 1U;
                        }
                        if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                                      & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))) {
                                if (vlSelfRef.last_block) {
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                                    if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                        vlSelfRef.ascon_top__DOT__extra_padding = 1U;
                                    }
                                }
                            }
                            if (vlSelfRef.debug_extra_padding_ff) {
                                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                vlSelfRef.ascon_top__DOT__sel_padding = 1U;
                            } else if (vlSelfRef.last_block) {
                                if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                }
                                if (VL_GTS_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                                    vlSelfRef.ascon_top__DOT__sel_padding = 1U;
                                }
                            }
                            vlSelfRef.ascon_top__DOT__sel_absorb_data = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_init_load = 1U;
                    }
                }
            }
        }
    }
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
    __Vtemp_1[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_1[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_1[2U] = 0U;
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 
        = ((0x41U >= (0x7fU & ((IData)(6U) * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
            ? (0x3fU & (((0U == (0x1fU & ((IData)(6U) 
                                          * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                          ? 0U : (__Vtemp_1[(((IData)(5U) 
                                              + (0x7fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & ((IData)(6U) 
                                                  * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))) 
                        | (__Vtemp_1[(3U & (((IData)(6U) 
                                             * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)) 
                                            >> 5U))] 
                           >> (0x1fU & ((IData)(6U) 
                                        * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
            : 0U);
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
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [0U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [0U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [0U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [1U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [1U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [1U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [2U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [2U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [2U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [2U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [3U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [3U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [3U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [3U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [3U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [4U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [4U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [4U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [4U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [4U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [5U] >> 0x2cU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [5U] >> 0x21U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [5U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1U] 
        = (0x7ffU & (IData)((vlSelfRef.ascon_top__DOT__sbox_input
                             [5U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0U] 
        = (0x7ffU & (IData)(vlSelfRef.ascon_top__DOT__sbox_input
                            [5U]));
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__42__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__43__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
    vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i = 0U;
    while (VL_GTS_III(32, 5U, vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)) {
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7feU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][0U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][0U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fdU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 1U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7fbU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 2U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7f7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 3U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][1U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][1U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7efU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 4U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7dfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 5U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x7bfU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 6U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x19U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1aU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1bU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1cU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1dU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][2U] >> 0x1eU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][2U] >> 0x1fU);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
               [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                  ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                  : 0U)][3U]);
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x77fU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 7U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xbU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xcU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xdU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if (VL_LIKELY(((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x6ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 8U));
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
            = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xeU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7feU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0xfU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fdU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 1U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x10U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7fbU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 2U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x11U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7f7U & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 3U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x12U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7efU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 4U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x13U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7dfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 5U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x14U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x7bfU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 6U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x15U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x77fU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 7U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x16U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x6ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 8U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x17U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x5ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 9U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0 
            = (1U & (vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                     [((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))
                        ? (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)
                        : 0U)][3U] >> 0x18U));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp 
            = ((0x3ffU & (IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp)) 
               | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_hf81e60fa__0) 
                  << 0xaU));
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__unnamedblk13__DOT__k = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in 
            = vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0;
        for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(11);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level = 0U;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num = 0xbU;
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__N)) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0 
                = ((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i)) 
                   && (1U & ((IData)(vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__in) 
                             >> (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[0U] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                        [0U]) | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h6d5115e6__0) 
                                           << (0xfU 
                                               & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk8__DOT__i);
        }
        while (VL_LTS_III(32, 1U, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num)) {
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i, 
                              VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0 
                    = (((0xaU >= (0xfU & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                        && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                    ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                    : 0U) >> (0xfU 
                                              & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))))) 
                       ^ ((0xaU >= (0xfU & ((IData)(1U) 
                                            + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))) 
                          && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                      ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                     [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                      : 0U) >> (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)))))));
                if (VL_LIKELY((((0xaU >= (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i)) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h520efa72__0) 
                                        << (0xfU & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i 
                    = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__unnamedblk9__DOT__i);
            }
            if ((1U == VL_MODDIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) {
                vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0 
                    = ((0xaU >= (0xfU & (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                         - (IData)(1U)))) 
                       && (1U & (((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                                   ? vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                                  [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)]
                                   : 0U) >> (0xfU & 
                                             (vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                                              - (IData)(1U))))));
                if (VL_LIKELY((((0xaU >= (0xfU & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)))) 
                                && (4U >= (7U & ((IData)(1U) 
                                                 + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))))))) {
                    vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage[(7U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))] 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))) 
                            & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                            [(7U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))]) 
                           | (0x7ffU & ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h63babb1e__0) 
                                        << (0xfU & 
                                            VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U))))));
                }
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = ((IData)(1U) + VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U)));
            } else {
                vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num 
                    = VL_DIVS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__num, (IData)(2U));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level);
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout 
            = ((4U >= (7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level))
                ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__stage
                   [(7U & vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__level)])
                : 0U);
        if ((4U >= (7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i))) {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x5ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 9U));
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[(7U 
                                                                                & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)] 
                = ((0x3ffU & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                    [(7U & vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i)]) 
                   | ((IData)(vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0) 
                      << 0xaU));
        } else {
            vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound_h268865b4__0 
                = vlSelfRef.__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__44__Vfuncout;
        }
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0xbU;
        vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i 
            = ((IData)(1U) + vlSelfRef.ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk10__DOT__i);
    }
}
