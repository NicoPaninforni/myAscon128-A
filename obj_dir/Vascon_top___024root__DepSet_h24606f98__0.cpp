// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

void Vascon_top___024root___ico_sequent__TOP__0(Vascon_top___024root* vlSelf);

void Vascon_top___024root___eval_ico(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_ico\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vascon_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vascon_top___024root___ico_sequent__TOP__0(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___ico_sequent__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 = 0;
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_10;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_10);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_11;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_11);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_12;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_12);
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_hf68ebc64__0 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0;
    VL_ZERO_W(110, ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_21;
    // Body
    vlSelfRef.ready_for_data = 0U;
    vlSelfRef.ciphertext_valid = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 0U;
    vlSelfRef.ascon_top__DOT__extra_padding = 0U;
    vlSelfRef.ascon_top__DOT__write_en = 0U;
    vlSelfRef.ascon_top__DOT__sel_absorb_data = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    vlSelfRef.ascon_top__DOT__sel_init_load = 0U;
    vlSelfRef.ascon_top__DOT__sel_padding = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
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
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = vlSelfRef.ascon_top__DOT__shares_in[0U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = vlSelfRef.ascon_top__DOT__shares_in[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = vlSelfRef.ascon_top__DOT__shares_in[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = vlSelfRef.ascon_top__DOT__shares_in[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = vlSelfRef.random_masks[0U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = vlSelfRef.random_masks[1U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = vlSelfRef.random_masks[2U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & vlSelfRef.random_masks[3U]);
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0x3fffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[4U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[5U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xf0000000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                    >> 0x12U) 
                                                   | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                      << 0xeU)));
    __Vtemp_3[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                     ^ vlSelfRef.random_masks[1U]);
    __Vtemp_3[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                     ^ vlSelfRef.random_masks[2U]);
    __Vtemp_3[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                ^ vlSelfRef.random_masks[3U]));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ vlSelfRef.random_masks[0U]);
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_3[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = ((vlSelfRef.random_masks[4U] << 0x12U) | 
           (vlSelfRef.random_masks[3U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = ((vlSelfRef.random_masks[5U] << 0x12U) | 
           (vlSelfRef.random_masks[4U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = ((vlSelfRef.random_masks[6U] << 0x12U) | 
           (vlSelfRef.random_masks[5U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & (vlSelfRef.random_masks[6U] >> 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xfffffffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[7U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[8U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[9U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[0xaU] = (0x3ffU 
                                                  & (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                     >> 4U));
    __Vtemp_9[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                     ^ ((vlSelfRef.random_masks[5U] 
                         << 0x12U) | (vlSelfRef.random_masks[4U] 
                                      >> 0xeU)));
    __Vtemp_9[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                     ^ ((vlSelfRef.random_masks[6U] 
                         << 0x12U) | (vlSelfRef.random_masks[5U] 
                                      >> 0xeU)));
    __Vtemp_9[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                ^ (vlSelfRef.random_masks[6U] 
                                   >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ ((vlSelfRef.random_masks[4U] << 0x12U) 
              | (vlSelfRef.random_masks[3U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_9[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_9[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_9[3U];
    vlSelfRef.ascon_top__DOT__shares_out[0U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U];
    vlSelfRef.ascon_top__DOT__shares_out[1U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U];
    vlSelfRef.ascon_top__DOT__shares_out[2U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U];
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0xffffc000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U]);
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state;
    if ((0x10U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__write_en = 1U;
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                        ? 0xbU : 0xcU);
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 0xfU : 0xeU);
            } else if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                              & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
                if (vlSelfRef.valid_data_in) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                    if (((IData)(vlSelfRef.EOT) & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                    }
                } else if (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                            & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                }
            } else {
                vlSelfRef.ascon_top__DOT__write_en = 1U;
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                        & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))
                        ? 0xbU : 6U);
            }
        } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__write_en = 1U;
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
        } else {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                    == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                        - (IData)(1U))) ? 0xaU : 9U);
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
    } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                              & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
            }
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                }
            } else if (((IData)(vlSelfRef.valid_data_in) 
                        | (IData)(vlSelfRef.debug_extra_padding_ff))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
            }
        } else {
            vlSelfRef.ascon_top__DOT__write_en = 1U;
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 6U : 2U);
        }
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__write_en = 1U;
            }
        }
        if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 5U : 4U);
            } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if (vlSelfRef.key_valid) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
            }
        } else if (vlSelfRef.start) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
        }
    }
    if (vlSelfRef.debug_extra_padding_ff) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelfRef.ascon_top__DOT__sel_padding) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0U;
        vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i = 0U;
        while ((vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                < (IData)(vlSelfRef.valid_bytes))) {
            VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                             - VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                            - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 
                            (0xffU & (((0U == (0x1fU 
                                               & (((IData)(0x7fU) 
                                                   - 
                                                   VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                  - (IData)(7U))))
                                        ? 0U : (vlSelfRef.data_in[
                                                (((IData)(7U) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(0x7fU) 
                                                       - 
                                                       VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                      - (IData)(7U)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7fU) 
                                                      - 
                                                      VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                     - (IData)(7U)))))) 
                                      | (vlSelfRef.data_in[
                                         (3U & ((((IData)(0x7fU) 
                                                  - 
                                                  VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                 - (IData)(7U)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & (((IData)(0x7fU) 
                                                 - 
                                                 VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                - (IData)(7U)))))));
            vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i);
        }
        VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                         - VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.valid_bytes), 3U)) 
                                        - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] 
            = vlSelfRef.data_in[0U];
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] 
            = vlSelfRef.data_in[1U];
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] 
            = vlSelfRef.data_in[2U];
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] 
            = vlSelfRef.data_in[3U];
    }
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_out[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_out[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_out[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_out[3U]);
        __Vtemp_21[3U] = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                           << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                                        >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[4U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[3U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[5U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[4U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[6U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[5U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[8U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[7U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[9U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[8U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & ((vlSelfRef.ascon_top__DOT__shares_out[0xaU] 
                           << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[9U] 
                                     >> 0x1cU)));
    } else {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_in[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_in[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_in[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_in[3U]);
        __Vtemp_21[3U] = (((IData)((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                          << 0xaU) 
                                                         | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                      << 0xaU) 
                                                                     | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                        >> 0x16U))))))) 
                           >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                                   (0x3fffffU 
                                                                    & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                                          >> 0x16U))))) 
                                                   << 0x16U) 
                                                  | (QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                         << 0xaU) 
                                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                           >> 0x16U)))))) 
                                                 >> 0x20U)) 
                                        << 2U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                               >> 0x16U))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                           >> 0x16U)))))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                                             >> 0x16U))))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                                         >> 0x16U)))))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = (((IData)((((QData)((IData)((0x3fffffU 
                                           & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                               << 0xaU) 
                                              | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                 >> 0x16U))))) 
                          << 0x16U) | (QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                             >> 0x16U))))))) 
                << 2U) | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                          >> 0x14U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = (IData)((((QData)((IData)((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                         >> 0xcU))) 
                        << 0x16U) | (QData)((IData)(
                                                    (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                     >> 0xcU)))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                       >> 0xcU))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                   >> 0xcU)))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((0xff000000U & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                               << 0xcU)) | ((0x3ffffcU 
                                             & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                >> 0xaU)) 
                                            | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                                               >> 0x14U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & (0xffffffU & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                       >> 0x14U)));
    }
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
        = (0x3fffU & __Vtemp_21[3U]);
    VL_COND_WIWW(128, vlSelfRef.ascon_top__DOT__reverse_reg_data_out, (IData)(vlSelfRef.ascon_top__DOT__sel_padding), 
                 ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[3U];
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__110__y);
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[0U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[1U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[2U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[3U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U];
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout), 
                 ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                    = vlSelfRef.data_in[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                    = vlSelfRef.data_in[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                    = vlSelfRef.data_in[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                    = vlSelfRef.data_in[3U];
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__111__y);
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[0U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[1U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[2U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[3U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U];
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout));
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                          >> 0xaU))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
        = (vlSelfRef.debug_state_1 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[0U]))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
        = (vlSelfRef.debug_state_0 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[2U]))));
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
    vlSelfRef.ascon_top__DOT__state_reg_in_absorb[1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    vlSelfRef.ciphertext[0U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_0);
    vlSelfRef.ciphertext[1U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
                                        >> 0x20U));
    vlSelfRef.ciphertext[2U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_1);
    vlSelfRef.ciphertext[3U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
                                        >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_absorb[0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    if (vlSelfRef.ascon_top__DOT__sel_absorb_data) {
        if (vlSelfRef.ascon_top__DOT__sel_init_load) {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                            [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                            [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U));
        } else {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [2U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [2U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [3U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [3U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U));
        }
    } else if (vlSelfRef.ascon_top__DOT__sel_init_load) {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = (IData)(vlSelfRef.initialVector);
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = (IData)((vlSelfRef.initialVector >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = (IData)(vlSelfRef.key1);
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = (IData)((vlSelfRef.key1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = (IData)(vlSelfRef.key2);
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = (IData)((vlSelfRef.key2 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(vlSelfRef.nonce1);
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((vlSelfRef.nonce1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(vlSelfRef.nonce2);
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((vlSelfRef.nonce2 >> 0x20U));
    } else {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                        ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [3U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                         ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [3U]) >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                        ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                           [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                    ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                    : 0x8000000000000000ULL))
                        : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [4U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                         ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                            [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                     ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                     : 0x8000000000000000ULL))
                         : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [4U]) >> 0x20U));
    }
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

void Vascon_top___024root___eval_triggers__ico(Vascon_top___024root* vlSelf);

bool Vascon_top___024root___eval_phase__ico(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_phase__ico\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vascon_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vascon_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vascon_top___024root___eval_act(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_act\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vascon_top___024root___nba_sequent__TOP__0(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_sequent__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*21:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_1;
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 = 0;
    CData/*3:0*/ __Vdly__ascon_top__DOT__round_counter;
    __Vdly__ascon_top__DOT__round_counter = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vdly__ascon_top__DOT__round_counter = vlSelfRef.ascon_top__DOT__round_counter;
    if (vlSelfRef.reset_n) {
        if (vlSelfRef.ascon_top__DOT__shift_en) {
            vlSelfRef.ascon_top__DOT__bit_counter = 
                (((IData)(vlSelfRef.ascon_top__DOT__bit_counter) 
                  == (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits))
                  ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.ascon_top__DOT__bit_counter))));
        }
        if (vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__rst_counter_round) {
            __Vdly__ascon_top__DOT__round_counter = 0U;
        } else if (vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable) {
            __Vdly__ascon_top__DOT__round_counter = 
                (0xfU & (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                          == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                              - (IData)(1U))) ? ((IData)(vlSelfRef.ascon_top__DOT__sel_masked_round)
                                                  ? 0U
                                                  : 4U)
                          : ((IData)(1U) + (IData)(vlSelfRef.ascon_top__DOT__round_counter))));
        }
        if (vlSelfRef.ascon_top__DOT__shift_enable_sipo) {
            vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state;
            vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state;
            vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state;
            vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state;
            vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state;
        }
        if (vlSelfRef.ascon_top__DOT__reg_key2_load) {
            vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q 
                = vlSelfRef.key2;
        }
        if (vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_load) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff 
                = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process;
        }
        if (vlSelfRef.ascon_top__DOT__reg_key1_load) {
            vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q 
                = vlSelfRef.key1;
        }
        if (vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__extra_padding_load) {
            vlSelfRef.debug_extra_padding_ff = vlSelfRef.ascon_top__DOT__extra_padding;
        }
        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state 
            = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state;
    } else {
        vlSelfRef.ascon_top__DOT__bit_counter = 0U;
        __Vdly__ascon_top__DOT__round_counter = 0U;
        vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state = 0ULL;
        vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state = 0ULL;
        vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state = 0ULL;
        vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state = 0ULL;
        vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state = 0ULL;
        vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q = 0ULL;
        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff = 0U;
        vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q = 0ULL;
        vlSelfRef.debug_extra_padding_ff = 0U;
        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state = 0U;
    }
    vlSelfRef.ascon_top__DOT__round_counter = __Vdly__ascon_top__DOT__round_counter;
    vlSelfRef.debug_bitcounter = vlSelfRef.ascon_top__DOT__bit_counter;
    vlSelfRef.debug_roundcounter = vlSelfRef.ascon_top__DOT__round_counter;
    __Vtemp_2[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_2[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 
        = ((0x41U >= (0x7fU & ((IData)(0x16U) * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
            ? (0x3fffffU & (((0U == (0x1fU & ((IData)(0x16U) 
                                              * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                              ? 0U : (__Vtemp_2[(((IData)(0x15U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))) 
                            | (__Vtemp_2[(3U & (((IData)(0x16U) 
                                                 * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x16U) 
                                            * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
            : 0U);
    vlSelfRef.debug_round_state_0 = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelfRef.debug_round_state_1 = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelfRef.debug_round_state_3 = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelfRef.debug_round_state_4 = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelfRef.debug_round_state_2 = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelfRef.done = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 0U;
    vlSelfRef.ascon_top__DOT__reg_key1_load = 0U;
    vlSelfRef.ascon_top__DOT__reg_key2_load = 0U;
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 0U;
    vlSelfRef.debug_state = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state;
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
    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 0U;
    vlSelfRef.ascon_top__DOT__last_cycle_sipo = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 0U;
    vlSelfRef.ascon_top__DOT__sel_xor_signal = 0U;
    vlSelfRef.ascon_top__DOT__sel_absorb_data = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    vlSelfRef.ascon_top__DOT__sel_init_load = 0U;
    vlSelfRef.ascon_top__DOT__shift_type = 0U;
    vlSelfRef.ascon_top__DOT__sel_padding = 0U;
    vlSelfRef.ascon_top__DOT__sel_masked_round = 1U;
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
            vlSelfRef.ascon_top__DOT__sel_masked_round 
                = ((1U & ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)) && ((1U & ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state) 
                                             >> 1U)) 
                                      && ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)) 
                                          && (IData)(vlSelfRef.debug_extra_padding_ff))));
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
                    vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
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
    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state;
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
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
                        if (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U)))) {
                            vlSelfRef.ready_tag = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                } else {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
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
                        if ((2U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                    vlSelfRef.ascon_top__DOT__shift_type = 1U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                        = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                            ? 0xbU : 0xcU);
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                        = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                            == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                - (IData)(1U))) ? 0xfU
                            : 0xeU);
                } else if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
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
                        if (vlSelfRef.valid_data_in) {
                            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                            if (((IData)(vlSelfRef.EOT) 
                                 & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                                vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                            }
                        } else if (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                                    & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding)))) {
                            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                        }
                    } else {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                                & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))
                                ? 0xbU : 6U);
                    }
                } else {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
                    } else {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0xaU : 9U);
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
                            vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                        }
                    } else if (((IData)(vlSelfRef.valid_data_in) 
                                | (IData)(vlSelfRef.debug_extra_padding_ff))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.valid_data_in)) 
                                      & (~ (IData)(vlSelfRef.debug_extra_padding_ff)))))) {
                            vlSelfRef.ascon_top__DOT__write_en = 1U;
                        }
                    }
                } else {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                        = ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))
                            ? 6U : 2U);
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_bits = 4U;
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    vlSelfRef.ascon_top__DOT__shift_enable_sipo = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((2U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 5U : 4U);
                    } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if (vlSelfRef.key_valid) {
                        vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
                    }
                } else if (vlSelfRef.start) {
                    vlSelfRef.ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
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
    if (vlSelfRef.debug_extra_padding_ff) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelfRef.ascon_top__DOT__sel_padding) {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] = 0U;
        vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i = 0U;
        while ((vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                < (IData)(vlSelfRef.valid_bytes))) {
            VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                             - VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                            - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 
                            (0xffU & (((0U == (0x1fU 
                                               & (((IData)(0x7fU) 
                                                   - 
                                                   VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                  - (IData)(7U))))
                                        ? 0U : (vlSelfRef.data_in[
                                                (((IData)(7U) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(0x7fU) 
                                                       - 
                                                       VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                      - (IData)(7U)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(0x7fU) 
                                                      - 
                                                      VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                     - (IData)(7U)))))) 
                                      | (vlSelfRef.data_in[
                                         (3U & ((((IData)(0x7fU) 
                                                  - 
                                                  VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                 - (IData)(7U)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & (((IData)(0x7fU) 
                                                 - 
                                                 VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i, 3U)) 
                                                - (IData)(7U)))))));
            vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelfRef.ascon_top__DOT__unnamedblk5__DOT__i);
        }
        VL_ASSIGNSEL_WI(128,8,(0x7fU & (((IData)(0x7fU) 
                                         - VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.valid_bytes), 3U)) 
                                        - (IData)(7U))), vlSelfRef.ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelfRef.ascon_top__DOT__data_in_padded[0U] 
            = vlSelfRef.data_in[0U];
        vlSelfRef.ascon_top__DOT__data_in_padded[1U] 
            = vlSelfRef.data_in[1U];
        vlSelfRef.ascon_top__DOT__data_in_padded[2U] 
            = vlSelfRef.data_in[2U];
        vlSelfRef.ascon_top__DOT__data_in_padded[3U] 
            = vlSelfRef.data_in[3U];
    }
    __Vtemp_4[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_4[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_4[2U] = 0U;
    __Vtemp_5[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_5[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    __Vtemp_6[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_6[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_6[2U] = 0U;
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
    } else {
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             ? (((0U == (0x1fU & ((IData)(0x16U) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                                  ? 0U : (__Vtemp_4[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x16U) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))) 
                                | (__Vtemp_4[(3U & 
                                              (((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
                             : 0U));
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                                  ? 0U : (__Vtemp_5[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x2cU) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x2cU) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))) 
                                | (__Vtemp_5[(3U & 
                                              (((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
                             : 0U));
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                             ? (((0U == (0x1fU & ((IData)(0x42U) 
                                                  * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                                  ? 0U : (__Vtemp_6[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x42U) 
                                                  * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x42U) 
                                                    * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))) 
                                | (__Vtemp_6[(3U & 
                                              (((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             : 0U));
    }
    VL_COND_WIWW(128, vlSelfRef.ascon_top__DOT__reverse_reg_data_out, (IData)(vlSelfRef.ascon_top__DOT__sel_padding), 
                 ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                    = vlSelfRef.ascon_top__DOT__data_in_padded[3U];
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__110__y);
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[0U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[1U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[2U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[3U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U];
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout), 
                 ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                    = vlSelfRef.data_in[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                    = vlSelfRef.data_in[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                    = vlSelfRef.data_in[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                    = vlSelfRef.data_in[3U];
                VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__111__y);
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[1U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[3U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                          >> 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (0xff00U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                                     >> 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (0xff0000U & (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                                       << 8U)));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[0U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U] 
                    = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U]) 
                       | (vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__x[2U] 
                          << 0x18U));
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[0U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[0U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[1U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[1U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[2U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[2U];
                vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout[3U] 
                    = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__y[3U];
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__111__Vfuncout));
    vlSelfRef.ascon_top__DOT__rc_block[1U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5;
    vlSelfRef.ascon_top__DOT__rc_block[2U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8;
    vlSelfRef.ascon_top__DOT__rc_block[0U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3;
}

VL_INLINE_OPT void Vascon_top___024root___nba_comb__TOP__0(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___nba_comb__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h6d228e18__0;
    ascon_top__DOT____Vlvbound_h6d228e18__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h41f8abe9__0;
    ascon_top__DOT____Vlvbound_h41f8abe9__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h24503583__0;
    ascon_top__DOT____Vlvbound_h24503583__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hf9d28137__0;
    ascon_top__DOT____Vlvbound_hf9d28137__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h744abf7e__0;
    ascon_top__DOT____Vlvbound_h744abf7e__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h4c17c0ce__0;
    ascon_top__DOT____Vlvbound_h4c17c0ce__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h1450b902__0;
    ascon_top__DOT____Vlvbound_h1450b902__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h77a38d52__0;
    ascon_top__DOT____Vlvbound_h77a38d52__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hab660487__0;
    ascon_top__DOT____Vlvbound_hab660487__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hddec360c__0;
    ascon_top__DOT____Vlvbound_hddec360c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha1d266f2__0;
    ascon_top__DOT____Vlvbound_ha1d266f2__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h83673542__0;
    ascon_top__DOT____Vlvbound_h83673542__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h8ede642b__0;
    ascon_top__DOT____Vlvbound_h8ede642b__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hca8aa35c__0;
    ascon_top__DOT____Vlvbound_hca8aa35c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hc77b3356__0;
    ascon_top__DOT____Vlvbound_hc77b3356__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h70a897c5__0;
    ascon_top__DOT____Vlvbound_h70a897c5__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h5a3e6041__0;
    ascon_top__DOT____Vlvbound_h5a3e6041__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h0ff19cd9__0;
    ascon_top__DOT____Vlvbound_h0ff19cd9__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h79952fd8__0;
    ascon_top__DOT____Vlvbound_h79952fd8__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he00f10ea__0;
    ascon_top__DOT____Vlvbound_he00f10ea__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h588f31b1__0;
    ascon_top__DOT____Vlvbound_h588f31b1__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he9c652f0__0;
    ascon_top__DOT____Vlvbound_he9c652f0__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha3e25553__0;
    ascon_top__DOT____Vlvbound_ha3e25553__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha8a11781__0;
    ascon_top__DOT____Vlvbound_ha8a11781__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hc7d60185__0;
    ascon_top__DOT____Vlvbound_hc7d60185__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h269ff53e__0;
    ascon_top__DOT____Vlvbound_h269ff53e__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h6748b421__0;
    ascon_top__DOT____Vlvbound_h6748b421__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hb482506e__0;
    ascon_top__DOT____Vlvbound_hb482506e__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h2a12e93d__0;
    ascon_top__DOT____Vlvbound_h2a12e93d__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h02c574b7__0;
    ascon_top__DOT____Vlvbound_h02c574b7__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hcc70194c__0;
    ascon_top__DOT____Vlvbound_hcc70194c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h02233bee__0;
    ascon_top__DOT____Vlvbound_h02233bee__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h133722c3__0;
    ascon_top__DOT____Vlvbound_h133722c3__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h6aa6d921__0;
    ascon_top__DOT____Vlvbound_h6aa6d921__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h509fa25c__0;
    ascon_top__DOT____Vlvbound_h509fa25c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h76fb6fe2__0;
    ascon_top__DOT____Vlvbound_h76fb6fe2__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h05b2562f__0;
    ascon_top__DOT____Vlvbound_h05b2562f__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hff9b19c6__0;
    ascon_top__DOT____Vlvbound_hff9b19c6__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_haacf0151__0;
    ascon_top__DOT____Vlvbound_haacf0151__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h7f715a7e__0;
    ascon_top__DOT____Vlvbound_h7f715a7e__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h4dd88525__0;
    ascon_top__DOT____Vlvbound_h4dd88525__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h9bff81b0__0;
    ascon_top__DOT____Vlvbound_h9bff81b0__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha1c9de3c__0;
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = 0;
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 = 0;
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_10;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_10);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_11;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_11);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_12;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_12);
    IData/*21:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_2;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_2 = 0;
    QData/*43:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_3;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_3 = 0;
    IData/*21:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_6;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_6 = 0;
    QData/*43:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_7;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_7 = 0;
    IData/*21:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_10;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_10 = 0;
    QData/*43:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_4_11;
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_11 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0;
    VL_ZERO_W(110, ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0);
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__in;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__N;
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__level;
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__num;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__in;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__N;
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__level;
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__num;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__in;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__N;
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__level;
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__num;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__in;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__N;
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__level;
    __Vfunc_ascon_top__DOT__xor_tree__3__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__num;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__in;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__N;
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__level;
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__num;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__in;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__N;
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__level;
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__num;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__in;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__N;
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__level;
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__num;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__in;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__N;
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__level;
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__num;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__in;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__N;
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__level;
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__num;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__in;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__N;
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__level;
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__num;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__in;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__N;
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__level;
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__num;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__in;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__N;
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__level;
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__num;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__in;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__N;
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__level;
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__num;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__in;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__N;
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__level;
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__num;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__in;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__N;
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__level;
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__num;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__in;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__N;
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__level;
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__num;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__in;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__N;
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__level;
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__num;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__in;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__N;
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__level;
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__num;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__in;
    __Vfunc_ascon_top__DOT__xor_tree__18__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__N;
    __Vfunc_ascon_top__DOT__xor_tree__18__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__level;
    __Vfunc_ascon_top__DOT__xor_tree__18__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__num;
    __Vfunc_ascon_top__DOT__xor_tree__18__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__in;
    __Vfunc_ascon_top__DOT__xor_tree__19__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__N;
    __Vfunc_ascon_top__DOT__xor_tree__19__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__level;
    __Vfunc_ascon_top__DOT__xor_tree__19__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__num;
    __Vfunc_ascon_top__DOT__xor_tree__19__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__in;
    __Vfunc_ascon_top__DOT__xor_tree__20__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__N;
    __Vfunc_ascon_top__DOT__xor_tree__20__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__level;
    __Vfunc_ascon_top__DOT__xor_tree__20__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__num;
    __Vfunc_ascon_top__DOT__xor_tree__20__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__in;
    __Vfunc_ascon_top__DOT__xor_tree__21__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__N;
    __Vfunc_ascon_top__DOT__xor_tree__21__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__level;
    __Vfunc_ascon_top__DOT__xor_tree__21__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__num;
    __Vfunc_ascon_top__DOT__xor_tree__21__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__in;
    __Vfunc_ascon_top__DOT__xor_tree__22__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__N;
    __Vfunc_ascon_top__DOT__xor_tree__22__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__level;
    __Vfunc_ascon_top__DOT__xor_tree__22__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__num;
    __Vfunc_ascon_top__DOT__xor_tree__22__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__in;
    __Vfunc_ascon_top__DOT__xor_tree__23__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__N;
    __Vfunc_ascon_top__DOT__xor_tree__23__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__level;
    __Vfunc_ascon_top__DOT__xor_tree__23__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__num;
    __Vfunc_ascon_top__DOT__xor_tree__23__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__in;
    __Vfunc_ascon_top__DOT__xor_tree__24__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__N;
    __Vfunc_ascon_top__DOT__xor_tree__24__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__level;
    __Vfunc_ascon_top__DOT__xor_tree__24__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__num;
    __Vfunc_ascon_top__DOT__xor_tree__24__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__in;
    __Vfunc_ascon_top__DOT__xor_tree__25__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__N;
    __Vfunc_ascon_top__DOT__xor_tree__25__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__level;
    __Vfunc_ascon_top__DOT__xor_tree__25__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__num;
    __Vfunc_ascon_top__DOT__xor_tree__25__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__in;
    __Vfunc_ascon_top__DOT__xor_tree__26__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__N;
    __Vfunc_ascon_top__DOT__xor_tree__26__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__level;
    __Vfunc_ascon_top__DOT__xor_tree__26__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__num;
    __Vfunc_ascon_top__DOT__xor_tree__26__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__in;
    __Vfunc_ascon_top__DOT__xor_tree__27__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__N;
    __Vfunc_ascon_top__DOT__xor_tree__27__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__level;
    __Vfunc_ascon_top__DOT__xor_tree__27__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__num;
    __Vfunc_ascon_top__DOT__xor_tree__27__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__in;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__N;
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__level;
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__num;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__in;
    __Vfunc_ascon_top__DOT__xor_tree__30__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__N;
    __Vfunc_ascon_top__DOT__xor_tree__30__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__level;
    __Vfunc_ascon_top__DOT__xor_tree__30__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__num;
    __Vfunc_ascon_top__DOT__xor_tree__30__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__in;
    __Vfunc_ascon_top__DOT__xor_tree__31__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__N;
    __Vfunc_ascon_top__DOT__xor_tree__31__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__level;
    __Vfunc_ascon_top__DOT__xor_tree__31__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__num;
    __Vfunc_ascon_top__DOT__xor_tree__31__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__in;
    __Vfunc_ascon_top__DOT__xor_tree__32__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__N;
    __Vfunc_ascon_top__DOT__xor_tree__32__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__level;
    __Vfunc_ascon_top__DOT__xor_tree__32__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__num;
    __Vfunc_ascon_top__DOT__xor_tree__32__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__in;
    __Vfunc_ascon_top__DOT__xor_tree__33__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__N;
    __Vfunc_ascon_top__DOT__xor_tree__33__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__level;
    __Vfunc_ascon_top__DOT__xor_tree__33__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__num;
    __Vfunc_ascon_top__DOT__xor_tree__33__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__in;
    __Vfunc_ascon_top__DOT__xor_tree__34__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__N;
    __Vfunc_ascon_top__DOT__xor_tree__34__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__level;
    __Vfunc_ascon_top__DOT__xor_tree__34__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__num;
    __Vfunc_ascon_top__DOT__xor_tree__34__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__in;
    __Vfunc_ascon_top__DOT__xor_tree__35__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__N;
    __Vfunc_ascon_top__DOT__xor_tree__35__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__level;
    __Vfunc_ascon_top__DOT__xor_tree__35__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__num;
    __Vfunc_ascon_top__DOT__xor_tree__35__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__in;
    __Vfunc_ascon_top__DOT__xor_tree__36__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__N;
    __Vfunc_ascon_top__DOT__xor_tree__36__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__level;
    __Vfunc_ascon_top__DOT__xor_tree__36__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__num;
    __Vfunc_ascon_top__DOT__xor_tree__36__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__in;
    __Vfunc_ascon_top__DOT__xor_tree__37__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__N;
    __Vfunc_ascon_top__DOT__xor_tree__37__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__level;
    __Vfunc_ascon_top__DOT__xor_tree__37__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__num;
    __Vfunc_ascon_top__DOT__xor_tree__37__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__in;
    __Vfunc_ascon_top__DOT__xor_tree__38__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__N;
    __Vfunc_ascon_top__DOT__xor_tree__38__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__level;
    __Vfunc_ascon_top__DOT__xor_tree__38__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__num;
    __Vfunc_ascon_top__DOT__xor_tree__38__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__in;
    __Vfunc_ascon_top__DOT__xor_tree__39__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__N;
    __Vfunc_ascon_top__DOT__xor_tree__39__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__level;
    __Vfunc_ascon_top__DOT__xor_tree__39__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__num;
    __Vfunc_ascon_top__DOT__xor_tree__39__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__in;
    __Vfunc_ascon_top__DOT__xor_tree__40__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__N;
    __Vfunc_ascon_top__DOT__xor_tree__40__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__level;
    __Vfunc_ascon_top__DOT__xor_tree__40__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__num;
    __Vfunc_ascon_top__DOT__xor_tree__40__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__in;
    __Vfunc_ascon_top__DOT__xor_tree__41__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__N;
    __Vfunc_ascon_top__DOT__xor_tree__41__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__num;
    __Vfunc_ascon_top__DOT__xor_tree__41__num = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__in;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__N;
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__num;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 0;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_37;
    // Body
    vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
        = ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
            >> 0xcU) ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
        = (0x3fffffU & (((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
                          << 0xaU) | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
                                      >> 0x16U)) ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5));
    vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
        = (0x3fffffU & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
                        ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3));
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
        = (vlSelfRef.debug_state_0 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[2U]))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
        = (vlSelfRef.debug_state_1 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[0U]))));
    vlSelfRef.tag2 = (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                      [4U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q);
    vlSelfRef.tag1 = (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                      [3U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q);
    vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    if (vlSelfRef.ascon_top__DOT__shift_enable_sipo) {
        if (vlSelfRef.ascon_top__DOT__shift_type) {
            if (vlSelfRef.ascon_top__DOT__last_cycle_sipo) {
                vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 0x14U));
            } else {
                vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 0x16U));
            }
        } else {
            vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
                = (((QData)((IData)((0xfffffU & vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9))) 
                    << 0x2cU) | (((QData)((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6)) 
                                  << 0x16U) | (QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit))));
        }
    }
    vlSelfRef.ascon_top__DOT__shares_in[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        (0x3fffffU 
                                                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                                        << 0x16U) 
                                                       | (QData)((IData)(
                                                                         (0x3fffffU 
                                                                          & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))));
    vlSelfRef.ascon_top__DOT__shares_in[1U] = ((vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
                                                << 0xcU) 
                                               | (IData)(
                                                         ((((QData)((IData)(
                                                                            (0x3fffffU 
                                                                             & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                                            << 0x16U) 
                                                           | (QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))) 
                                                          >> 0x20U)));
    vlSelfRef.ascon_top__DOT__shares_in[2U] = ((0xfffffffcU 
                                                & vlSelfRef.ascon_top__DOT__shares_in[2U]) 
                                               | (vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
                                                  >> 0x14U));
    vlSelfRef.ascon_top__DOT__shares_in[2U] = ((3U 
                                                & vlSelfRef.ascon_top__DOT__shares_in[2U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(
                                                                            (0x3fffffU 
                                                                             & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                            << 0x16U) 
                                                           | (QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))))) 
                                                  << 2U));
    vlSelfRef.ascon_top__DOT__shares_in[3U] = (0x3fffU 
                                               & (((IData)(
                                                           (((QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                             << 0x16U) 
                                                            | (QData)((IData)(
                                                                              (0x3fffffU 
                                                                               & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))))) 
                                                   >> 0x1eU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                                << 0x16U) 
                                                               | (QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])))) 
                                                              >> 0x20U)) 
                                                     << 2U)));
    vlSelfRef.ascon_top__DOT__state_reg_in_absorb[0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    vlSelfRef.ciphertext[0U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_0);
    vlSelfRef.ciphertext[1U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
                                        >> 0x20U));
    vlSelfRef.ciphertext[2U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_1);
    vlSelfRef.ciphertext[3U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
                                        >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_absorb[1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x15U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x15U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x14U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x14U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x13U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x13U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x12U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x12U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x11U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x11U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x10U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0x10U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xfU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xfU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xeU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xeU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xdU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xdU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xcU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xcU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xbU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xbU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xaU] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0xaU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[9U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [9U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[8U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [8U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[7U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [7U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[6U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [6U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[5U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [5U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[4U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [4U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[3U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [3U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[2U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [2U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[1U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [1U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0U] 
            = vlSelfRef.ascon_top__DOT__sbox_output
            [0U];
    } else {
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x15U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x15U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x14U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x14U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x13U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x13U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x12U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x12U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x11U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x11U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0x10U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0x10U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xfU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xfU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xeU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xeU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xdU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xdU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xcU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xcU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xbU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xbU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0xaU] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0xaU];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[9U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [9U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[8U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [8U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[7U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [7U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[6U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [6U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[5U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [5U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[4U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [4U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[3U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [3U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[2U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [2U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[1U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [1U];
        vlSelfRef.ascon_top__DOT__mux_sbox_out[0U] 
            = vlSelfRef.ascon_top__DOT__sbox_output_unmasked
            [0U];
    }
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (1U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [1U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [1U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [2U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [2U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [3U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [3U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [3U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [4U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [4U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x18U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [5U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [5U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [6U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x19U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [6U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [7U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x1aU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x200U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [7U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [8U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x1bU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [8U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [9U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1cU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [9U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3ff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (8U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0xdU]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xeU] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3fbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xfU] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3f7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3effU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3dffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x18U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x3bffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x19U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x37ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x2fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x1000U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0x14U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][0U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][0U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][1U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][1U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][2U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][2U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[0U][3U] 
        = ((0x1fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [0U][3U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0x15U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (2U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [1U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [1U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [2U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [2U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [3U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [3U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [3U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [4U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [4U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [5U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [5U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [6U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x18U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [6U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [7U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x19U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [7U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [8U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x1aU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x400U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [8U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [9U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1bU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [9U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3ff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xdU] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0xeU]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3fbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xfU] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3f7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3effU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3dffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x3bffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x18U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x37ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x2fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0x14U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][0U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][0U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][1U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][1U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][2U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][2U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[1U][3U] 
        = ((0x1fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [1U][3U]) | (0x2000U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0x15U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [1U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [1U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [1U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (4U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [2U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [2U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [2U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [3U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [3U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [3U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [3U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [4U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [4U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [4U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [4U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [5U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [5U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [5U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [5U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [6U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [6U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [6U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [6U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [7U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x18U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [7U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [7U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [7U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [8U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [8U] << 0x19U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [8U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [8U] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [8U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [9U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [9U] << 0x1aU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [9U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x800U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [9U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [9U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xaU] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xaU] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xaU] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xaU] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0xbU] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0xbU] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xbU] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3ff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xbU] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (4U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xcU] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x1000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xcU] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xcU] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xcU] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (8U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0xdU] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x2000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xdU] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xdU] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x20U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xdU] >> 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xeU] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x4000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xeU] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xeU] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3fbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xeU] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x8000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0xfU] << 0xdU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20U & vlSelfRef.ascon_top__DOT__mux_sbox_out
                         [0xfU]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x8000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                       [0xfU] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0xfU] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3f7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0xfU] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x10000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x10U] << 1U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x10000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x10U] << 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x10U] << 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3effU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x10U] >> 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x20000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 0xfU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                  [0x11U] << 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x20000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x11U] << 0x15U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x11U] << 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3dffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x11U] >> 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x40000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x12U] << 0x10U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x100U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] << 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x40000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x12U] << 0x16U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x12U] << 9U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x3bffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x12U] >> 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x80000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                     [0x13U] << 0x11U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x200U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] << 4U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x80000000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                        [0x13U] << 0x17U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x13U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x37ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x13U] >> 3U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x100000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0x12U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x400U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x14U] << 5U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (1U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x14U] >> 8U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x400000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x14U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x2fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0x14U] >> 2U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][0U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][0U]) | (0x200000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0x13U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][1U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][1U]) | (0x800U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                   [0x15U] << 6U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (2U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                               [0x15U] >> 7U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][2U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][2U]) | (0x800000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                      [0x15U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_in[2U][3U] 
        = ((0x1fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
            [2U][3U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__mux_sbox_out
                                    [0x15U] >> 1U)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = vlSelfRef.ascon_top__DOT__shares_in[0U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = vlSelfRef.ascon_top__DOT__shares_in[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = vlSelfRef.ascon_top__DOT__shares_in[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = vlSelfRef.ascon_top__DOT__shares_in[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = vlSelfRef.random_masks[0U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = vlSelfRef.random_masks[1U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = vlSelfRef.random_masks[2U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & vlSelfRef.random_masks[3U]);
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0x3fffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[4U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[5U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xf0000000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                    >> 0x12U) 
                                                   | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                      << 0xeU)));
    __Vtemp_4[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                     ^ vlSelfRef.random_masks[1U]);
    __Vtemp_4[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                     ^ vlSelfRef.random_masks[2U]);
    __Vtemp_4[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                ^ vlSelfRef.random_masks[3U]));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ vlSelfRef.random_masks[0U]);
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_4[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = ((vlSelfRef.random_masks[4U] << 0x12U) | 
           (vlSelfRef.random_masks[3U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = ((vlSelfRef.random_masks[5U] << 0x12U) | 
           (vlSelfRef.random_masks[4U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = ((vlSelfRef.random_masks[6U] << 0x12U) | 
           (vlSelfRef.random_masks[5U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & (vlSelfRef.random_masks[6U] >> 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xfffffffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[7U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[8U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[9U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[0xaU] = (0x3ffU 
                                                  & (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                     >> 4U));
    __Vtemp_10[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                      ^ ((vlSelfRef.random_masks[5U] 
                          << 0x12U) | (vlSelfRef.random_masks[4U] 
                                       >> 0xeU)));
    __Vtemp_10[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                      ^ ((vlSelfRef.random_masks[6U] 
                          << 0x12U) | (vlSelfRef.random_masks[5U] 
                                       >> 0xeU)));
    __Vtemp_10[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                 ^ (vlSelfRef.random_masks[6U] 
                                    >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ ((vlSelfRef.random_masks[4U] << 0x12U) 
              | (vlSelfRef.random_masks[3U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_10[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_10[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_10[3U];
    vlSelfRef.ascon_top__DOT__shares_out[0U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U];
    vlSelfRef.ascon_top__DOT__shares_out[1U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U];
    vlSelfRef.ascon_top__DOT__shares_out[2U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U];
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0xffffc000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U]);
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_out[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_out[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_out[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_out[3U]);
        __Vtemp_37[3U] = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                           << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                                        >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[4U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[3U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[5U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[4U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[6U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[5U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[8U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[7U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[9U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[8U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & ((vlSelfRef.ascon_top__DOT__shares_out[0xaU] 
                           << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[9U] 
                                     >> 0x1cU)));
    } else {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_in[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_in[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_in[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_in[3U]);
        __Vtemp_37[3U] = (((IData)((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                          << 0xaU) 
                                                         | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                      << 0xaU) 
                                                                     | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                        >> 0x16U))))))) 
                           >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                                   (0x3fffffU 
                                                                    & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                                          >> 0x16U))))) 
                                                   << 0x16U) 
                                                  | (QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                         << 0xaU) 
                                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                           >> 0x16U)))))) 
                                                 >> 0x20U)) 
                                        << 2U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                               >> 0x16U))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                           >> 0x16U)))))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                                             >> 0x16U))))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                                         >> 0x16U)))))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = (((IData)((((QData)((IData)((0x3fffffU 
                                           & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                               << 0xaU) 
                                              | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                 >> 0x16U))))) 
                          << 0x16U) | (QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                             >> 0x16U))))))) 
                << 2U) | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                          >> 0x14U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = (IData)((((QData)((IData)((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                         >> 0xcU))) 
                        << 0x16U) | (QData)((IData)(
                                                    (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                     >> 0xcU)))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                       >> 0xcU))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                   >> 0xcU)))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((0xff000000U & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                               << 0xcU)) | ((0x3ffffcU 
                                             & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                >> 0xaU)) 
                                            | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                                               >> 0x14U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & (0xffffffU & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                       >> 0x14U)));
    }
    if (vlSelfRef.ascon_top__DOT__sel_absorb_data) {
        if (vlSelfRef.ascon_top__DOT__sel_init_load) {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                            [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                            [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U));
        } else {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [2U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [2U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [3U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [3U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U));
        }
    } else if (vlSelfRef.ascon_top__DOT__sel_init_load) {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = (IData)(vlSelfRef.initialVector);
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = (IData)((vlSelfRef.initialVector >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = (IData)(vlSelfRef.key1);
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = (IData)((vlSelfRef.key1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = (IData)(vlSelfRef.key2);
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = (IData)((vlSelfRef.key2 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(vlSelfRef.nonce1);
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((vlSelfRef.nonce1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(vlSelfRef.nonce2);
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((vlSelfRef.nonce2 >> 0x20U));
    } else {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                        ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [3U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                         ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [3U]) >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                        ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                           [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                    ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                    : 0x8000000000000000ULL))
                        : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [4U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                         ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                            [4U] ^ ((IData)(vlSelfRef.ascon_top__DOT__sel_xor_signal)
                                     ? vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q
                                     : 0x8000000000000000ULL))
                         : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [4U]) >> 0x20U));
    }
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_10 
        = (0x3fffffU & (((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                          [2U][2U] << 0x1eU) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                [2U][2U] 
                                                >> 2U)) 
                        ^ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                            [2U][2U] << 0x14U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                  [2U][1U] 
                                                  >> 0xcU))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_6 
        = (0x3fffffU & (((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                          [1U][2U] << 0x1eU) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                [1U][2U] 
                                                >> 2U)) 
                        ^ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                            [1U][2U] << 0x14U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                  [1U][1U] 
                                                  >> 0xcU))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_2 
        = (0x3fffffU & (((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                          [0U][2U] << 0x1eU) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                [0U][2U] 
                                                >> 2U)) 
                        ^ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                            [0U][2U] << 0x14U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                  [0U][1U] 
                                                  >> 0xcU))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_11 
        = (0xfffffffffffULL & ((((QData)((IData)(vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                 [2U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                             [2U][0U]))) 
                               ^ (((QData)((IData)(
                                                   (0x3fffffU 
                                                    & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                    [2U][0U]))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                    [2U][3U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                      [2U][2U] 
                                                                      >> 0x18U))))))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_7 
        = (0xfffffffffffULL & ((((QData)((IData)(vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                 [1U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                             [1U][0U]))) 
                               ^ (((QData)((IData)(
                                                   (0x3fffffU 
                                                    & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                    [1U][0U]))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                    [1U][3U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                      [1U][2U] 
                                                                      >> 0x18U))))))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_4_3 
        = (0xfffffffffffULL & ((((QData)((IData)(vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                 [0U][1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                             [0U][0U]))) 
                               ^ (((QData)((IData)(
                                                   (0x3fffffU 
                                                    & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                    [0U][0U]))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                    [0U][3U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                      [0U][2U] 
                                                                      >> 0x18U))))))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
        = (0x3fffU & __Vtemp_37[3U]);
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][0U] 
        = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_11);
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [2U][1U]) | (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_4_11 
                                 >> 0x20U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [2U][1U]) | ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [2U][2U] << 0x14U) | 
                             (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [2U][1U] >> 0xcU))) << 0xcU));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [2U][2U]) | (3U & ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                    [2U][2U] << 0x14U) 
                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                      [2U][1U] >> 0xcU))) 
                               >> 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [2U][2U]) | (ascon_top__DOT____VdfgRegularize_h0932e10f_4_10 
                         << 2U));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [2U][2U]) | (0xff000000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                         [2U][2U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[2U][3U] 
        = (0x3fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
           [2U][3U]);
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][0U] 
        = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_7);
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [1U][1U]) | (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_4_7 
                                 >> 0x20U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [1U][1U]) | ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [1U][2U] << 0x14U) | 
                             (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [1U][1U] >> 0xcU))) << 0xcU));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [1U][2U]) | (3U & ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                    [1U][2U] << 0x14U) 
                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                      [1U][1U] >> 0xcU))) 
                               >> 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [1U][2U]) | (ascon_top__DOT____VdfgRegularize_h0932e10f_4_6 
                         << 2U));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [1U][2U]) | (0xff000000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                         [1U][2U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[1U][3U] 
        = (0x3fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
           [1U][3U]);
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
        = (IData)((((QData)((IData)((0xfffffU & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_11)))) 
                    << 0x2cU) | (((QData)((IData)((0x3fffffU 
                                                   & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_7)))) 
                                  << 0x16U) | (QData)((IData)(
                                                              (0x3fffffU 
                                                               & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_3)))))));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = (IData)(((((QData)((IData)((0xfffffU & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_11)))) 
                     << 0x2cU) | (((QData)((IData)(
                                                   (0x3fffffU 
                                                    & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_7)))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_3)))))) 
                   >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = (IData)((((QData)((IData)((0xfffffU & (IData)(
                                                        (ascon_top__DOT____VdfgRegularize_h0932e10f_4_11 
                                                         >> 0x16U))))) 
                    << 0x2cU) | (((QData)((IData)((0x3fffffU 
                                                   & (IData)(
                                                             (ascon_top__DOT____VdfgRegularize_h0932e10f_4_7 
                                                              >> 0x16U))))) 
                                  << 0x16U) | (QData)((IData)(
                                                              (0x3fffffU 
                                                               & (IData)(
                                                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_4_3 
                                                                          >> 0x16U))))))));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = (IData)(((((QData)((IData)((0xfffffU & (IData)(
                                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_4_11 
                                                          >> 0x16U))))) 
                     << 0x2cU) | (((QData)((IData)(
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (ascon_top__DOT____VdfgRegularize_h0932e10f_4_7 
                                                               >> 0x16U))))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & (IData)(
                                                                          (ascon_top__DOT____VdfgRegularize_h0932e10f_4_3 
                                                                           >> 0x16U))))))) 
                   >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[4U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[4U]) 
           | (0x3fffffU & (~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                               [0U][2U] << 0x14U) | 
                              (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                               [0U][1U] >> 0xcU)))));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[4U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[4U]) 
           | ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                   [1U][2U] << 0x14U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                         [1U][1U] >> 0xcU))) 
              << 0x16U));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | (0xfffU & ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                             [1U][2U] << 0x14U) | (
                                                   vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                   [1U][1U] 
                                                   >> 0xcU))) 
                        >> 0xaU)));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                   [2U][1U] << 0x14U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                         [2U][1U] >> 0xcU))) 
              << 0xcU));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[6U] 
        = (IData)((((QData)((IData)((0xfffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_4_10))) 
                    << 0x2cU) | (((QData)((IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_6)) 
                                  << 0x16U) | (QData)((IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_2)))));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[7U] 
        = (IData)(((((QData)((IData)((0xfffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_4_10))) 
                     << 0x2cU) | (((QData)((IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_6)) 
                                   << 0x16U) | (QData)((IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_2)))) 
                   >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[8U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[8U]) 
           | (0x3fffffU & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                            [0U][3U] << 8U) | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                               [0U][2U] 
                                               >> 0x18U))));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[8U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[8U]) 
           | ((IData)((((QData)((IData)((0xfffffU & 
                                         ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [2U][3U] 
                                           << 8U) | 
                                          (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                           [2U][2U] 
                                           >> 0x18U))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                         [1U][3U] 
                                                         << 8U) 
                                                        | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                           [1U][2U] 
                                                           >> 0x18U))))))) 
              << 0x16U));
    vlSelfRef.ascon_top__DOT__state_reg_in_shiftdplus1[9U] 
        = (((IData)((((QData)((IData)((0xfffffU & (
                                                   (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                      [2U][2U] 
                                                      >> 0x18U))))) 
                      << 0x16U) | (QData)((IData)((0x3fffffU 
                                                   & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                       [1U][3U] 
                                                       << 8U) 
                                                      | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                         [1U][2U] 
                                                         >> 0x18U))))))) 
            >> 0xaU) | ((IData)(((((QData)((IData)(
                                                   (0xfffffU 
                                                    & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                        [2U][3U] 
                                                        << 8U) 
                                                       | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                          [2U][2U] 
                                                          >> 0x18U))))) 
                                   << 0x16U) | (QData)((IData)(
                                                               (0x3fffffU 
                                                                & ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                    [1U][3U] 
                                                                    << 8U) 
                                                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                                                      [1U][2U] 
                                                                      >> 0x18U)))))) 
                                 >> 0x20U)) << 0x16U));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][0U] 
        = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_4_3);
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [0U][1U]) | (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_4_3 
                                 >> 0x20U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [0U][1U]) | ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [0U][2U] << 0x14U) | 
                             (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                              [0U][1U] >> 0xcU))) << 0xcU));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [0U][2U]) | (3U & ((~ ((vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                    [0U][2U] << 0x14U) 
                                   | (vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                                      [0U][1U] >> 0xcU))) 
                               >> 0x14U)));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [0U][2U]) | (ascon_top__DOT____VdfgRegularize_h0932e10f_4_2 
                         << 2U));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_out
            [0U][2U]) | (0xff000000U & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
                         [0U][2U]));
    vlSelfRef.ascon_top__DOT__affine_layer2nd_out[0U][3U] 
        = (0x3fffU & vlSelfRef.ascon_top__DOT__affine_layer2nd_in
           [0U][3U]);
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                          >> 0xaU))));
    ascon_top__DOT____Vlvbound_h6d228e18__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][0U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h6d228e18__0));
    ascon_top__DOT____Vlvbound_h6d228e18__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][0U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6d228e18__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h6d228e18__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][0U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6d228e18__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = vlSelfRef.ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__0__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__0__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__0__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__0__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__0__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__0__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout));
    ascon_top__DOT____Vlvbound_h41f8abe9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h41f8abe9__0));
    ascon_top__DOT____Vlvbound_h41f8abe9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h41f8abe9__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h41f8abe9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h41f8abe9__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = vlSelfRef.ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__1__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__1__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__1__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__1__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__1__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound_h24503583__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h24503583__0));
    ascon_top__DOT____Vlvbound_h24503583__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h24503583__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h24503583__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h24503583__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = vlSelfRef.ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__2__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__2__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__2__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__2__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__2__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound_hf9d28137__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hf9d28137__0));
    ascon_top__DOT____Vlvbound_hf9d28137__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf9d28137__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hf9d28137__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf9d28137__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = vlSelfRef.ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__3__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__3__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__3__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__3__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__3__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__3__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound_h744abf7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h744abf7e__0));
    ascon_top__DOT____Vlvbound_h744abf7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h744abf7e__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h744abf7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h744abf7e__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = vlSelfRef.ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__4__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__4__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__4__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__4__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__4__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound_h4c17c0ce__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h4c17c0ce__0));
    ascon_top__DOT____Vlvbound_h4c17c0ce__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4c17c0ce__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h4c17c0ce__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4c17c0ce__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = vlSelfRef.ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__5__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__5__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__5__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__5__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__5__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound_h1450b902__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h1450b902__0));
    ascon_top__DOT____Vlvbound_h1450b902__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1450b902__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h1450b902__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1450b902__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = vlSelfRef.ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__6__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__6__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__6__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__6__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__6__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound_h77a38d52__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h77a38d52__0));
    ascon_top__DOT____Vlvbound_h77a38d52__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h77a38d52__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h77a38d52__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h77a38d52__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = vlSelfRef.ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__7__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__7__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__7__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__7__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__7__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound_hab660487__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hab660487__0));
    ascon_top__DOT____Vlvbound_hab660487__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hab660487__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hab660487__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hab660487__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = vlSelfRef.ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__8__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__8__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__8__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__8__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound_hddec360c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hddec360c__0));
    ascon_top__DOT____Vlvbound_hddec360c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hddec360c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hddec360c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hddec360c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = vlSelfRef.ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__9__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__9__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__9__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
          ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__9__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)])
          : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound_ha1d266f2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha1d266f2__0));
    ascon_top__DOT____Vlvbound_ha1d266f2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1d266f2__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha1d266f2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1d266f2__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = vlSelfRef.ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__10__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__10__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__10__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__10__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound_h83673542__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h83673542__0));
    ascon_top__DOT____Vlvbound_h83673542__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h83673542__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h83673542__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h83673542__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = vlSelfRef.ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__11__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__11__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__11__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__11__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound_h8ede642b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h8ede642b__0));
    ascon_top__DOT____Vlvbound_h8ede642b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h8ede642b__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h8ede642b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h8ede642b__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = vlSelfRef.ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__12__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__12__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__12__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__12__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound_hca8aa35c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hca8aa35c__0));
    ascon_top__DOT____Vlvbound_hca8aa35c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hca8aa35c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hca8aa35c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hca8aa35c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = vlSelfRef.ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__13__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__13__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__13__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__13__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound_hc77b3356__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hc77b3356__0));
    ascon_top__DOT____Vlvbound_hc77b3356__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc77b3356__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hc77b3356__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc77b3356__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = vlSelfRef.ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__14__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__14__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__14__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__14__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound_h70a897c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h70a897c5__0));
    ascon_top__DOT____Vlvbound_h70a897c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h70a897c5__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h70a897c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h70a897c5__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = vlSelfRef.ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__15__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__15__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__15__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__15__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound_h5a3e6041__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h5a3e6041__0));
    ascon_top__DOT____Vlvbound_h5a3e6041__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5a3e6041__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h5a3e6041__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5a3e6041__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = vlSelfRef.ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__16__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__16__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__16__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__16__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__16__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound_h0ff19cd9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h0ff19cd9__0));
    ascon_top__DOT____Vlvbound_h0ff19cd9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h0ff19cd9__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h0ff19cd9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h0ff19cd9__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = vlSelfRef.ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__17__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__17__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__17__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__17__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__17__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound_h79952fd8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h79952fd8__0));
    ascon_top__DOT____Vlvbound_h79952fd8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h79952fd8__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h79952fd8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h79952fd8__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__18__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__in = vlSelfRef.ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__18__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__18__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__18__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__18__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__18__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__18__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__18__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout) 
              << 0x12U));
    ascon_top__DOT____Vlvbound_he00f10ea__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he00f10ea__0));
    ascon_top__DOT____Vlvbound_he00f10ea__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he00f10ea__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he00f10ea__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he00f10ea__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__19__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__in = vlSelfRef.ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__19__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__19__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__19__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__19__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__19__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__19__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__19__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout) 
              << 0x13U));
    ascon_top__DOT____Vlvbound_h588f31b1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h588f31b1__0));
    ascon_top__DOT____Vlvbound_h588f31b1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h588f31b1__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h588f31b1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h588f31b1__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__20__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__in = vlSelfRef.ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__20__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__20__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__20__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__20__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__20__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__20__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__20__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout) 
              << 0x14U));
    ascon_top__DOT____Vlvbound_he9c652f0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he9c652f0__0));
    ascon_top__DOT____Vlvbound_he9c652f0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he9c652f0__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he9c652f0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he9c652f0__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__21__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__in = vlSelfRef.ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__21__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__21__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__21__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__21__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__21__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__21__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__21__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout) 
              << 0x15U));
    ascon_top__DOT____Vlvbound_ha3e25553__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha3e25553__0));
    ascon_top__DOT____Vlvbound_ha3e25553__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha3e25553__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha3e25553__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha3e25553__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__22__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__in = vlSelfRef.ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__22__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__22__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__22__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__22__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__22__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__22__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__22__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout) 
              << 0x16U));
    ascon_top__DOT____Vlvbound_ha8a11781__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha8a11781__0));
    ascon_top__DOT____Vlvbound_ha8a11781__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha8a11781__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha8a11781__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha8a11781__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__23__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__in = vlSelfRef.ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__23__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__23__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__23__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__23__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__23__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__23__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__23__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout) 
              << 0x17U));
    ascon_top__DOT____Vlvbound_hc7d60185__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hc7d60185__0));
    ascon_top__DOT____Vlvbound_hc7d60185__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc7d60185__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hc7d60185__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc7d60185__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__24__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__in = vlSelfRef.ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__24__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__24__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__24__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__24__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__24__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__24__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__24__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout) 
              << 0x18U));
    ascon_top__DOT____Vlvbound_h269ff53e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h269ff53e__0));
    ascon_top__DOT____Vlvbound_h269ff53e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h269ff53e__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h269ff53e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h269ff53e__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__25__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__in = vlSelfRef.ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__25__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__25__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__25__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__25__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__25__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__25__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__25__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout) 
              << 0x19U));
    ascon_top__DOT____Vlvbound_h6748b421__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h6748b421__0));
    ascon_top__DOT____Vlvbound_h6748b421__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6748b421__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h6748b421__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6748b421__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__26__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__in = vlSelfRef.ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__26__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__26__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__26__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__26__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__26__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__26__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__26__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout) 
              << 0x1aU));
    ascon_top__DOT____Vlvbound_hb482506e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hb482506e__0));
    ascon_top__DOT____Vlvbound_hb482506e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb482506e__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hb482506e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb482506e__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__27__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__in = vlSelfRef.ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__27__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__27__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__27__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__27__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__27__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__27__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__27__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout) 
              << 0x1bU));
    ascon_top__DOT____Vlvbound_h2a12e93d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h2a12e93d__0));
    ascon_top__DOT____Vlvbound_h2a12e93d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h2a12e93d__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h2a12e93d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h2a12e93d__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = vlSelfRef.ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__28__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__28__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__28__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__28__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__28__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout) 
              << 0x1cU));
    ascon_top__DOT____Vlvbound_h02c574b7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h02c574b7__0));
    ascon_top__DOT____Vlvbound_h02c574b7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h02c574b7__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h02c574b7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h02c574b7__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelfRef.ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__29__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__29__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))));
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
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
              << 0x1dU));
    ascon_top__DOT____Vlvbound_hcc70194c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][0U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hcc70194c__0));
    ascon_top__DOT____Vlvbound_hcc70194c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][0U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcc70194c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hcc70194c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][0U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcc70194c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__30__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__in = vlSelfRef.ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__30__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__30__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__30__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__30__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__30__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__30__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__30__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout) 
              << 0x1eU));
    ascon_top__DOT____Vlvbound_h02233bee__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][0U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h02233bee__0));
    ascon_top__DOT____Vlvbound_h02233bee__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][0U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h02233bee__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h02233bee__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][0U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h02233bee__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__31__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__in = vlSelfRef.ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__31__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__31__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__31__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__31__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__31__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__31__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__31__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[0U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout) 
              << 0x1fU));
    ascon_top__DOT____Vlvbound_h133722c3__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][1U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h133722c3__0));
    ascon_top__DOT____Vlvbound_h133722c3__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][1U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h133722c3__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h133722c3__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][1U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h133722c3__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__32__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__in = vlSelfRef.ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__32__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__32__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__32__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__32__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__32__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__32__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__32__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__32__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout));
    ascon_top__DOT____Vlvbound_h6aa6d921__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h6aa6d921__0));
    ascon_top__DOT____Vlvbound_h6aa6d921__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6aa6d921__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h6aa6d921__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6aa6d921__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__33__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__in = vlSelfRef.ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__33__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__33__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__33__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__33__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__33__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__33__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__33__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound_h509fa25c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h509fa25c__0));
    ascon_top__DOT____Vlvbound_h509fa25c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h509fa25c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h509fa25c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h509fa25c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__34__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__in = vlSelfRef.ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__34__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__34__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__34__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__34__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__34__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__34__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__34__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound_h76fb6fe2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h76fb6fe2__0));
    ascon_top__DOT____Vlvbound_h76fb6fe2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h76fb6fe2__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h76fb6fe2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h76fb6fe2__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__35__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__in = vlSelfRef.ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__35__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__35__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__35__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__35__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__35__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__35__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__35__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound_h05b2562f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h05b2562f__0));
    ascon_top__DOT____Vlvbound_h05b2562f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h05b2562f__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h05b2562f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h05b2562f__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__36__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__in = vlSelfRef.ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__36__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__36__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__36__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__36__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__36__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__36__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__36__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound_hff9b19c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hff9b19c6__0));
    ascon_top__DOT____Vlvbound_hff9b19c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hff9b19c6__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hff9b19c6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hff9b19c6__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__37__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__in = vlSelfRef.ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__37__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__37__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__37__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__37__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__37__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__37__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__37__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound_haacf0151__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_haacf0151__0));
    ascon_top__DOT____Vlvbound_haacf0151__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_haacf0151__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_haacf0151__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_haacf0151__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__38__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__in = vlSelfRef.ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__38__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__38__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__38__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__38__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__38__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__38__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__38__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound_h7f715a7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h7f715a7e__0));
    ascon_top__DOT____Vlvbound_h7f715a7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7f715a7e__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h7f715a7e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7f715a7e__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__39__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__in = vlSelfRef.ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__39__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__39__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__39__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__39__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__39__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__39__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__39__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound_h4dd88525__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h4dd88525__0));
    ascon_top__DOT____Vlvbound_h4dd88525__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4dd88525__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h4dd88525__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4dd88525__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__40__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__in = vlSelfRef.ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__40__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__40__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__40__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__40__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__40__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__40__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__40__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound_h9bff81b0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h9bff81b0__0));
    ascon_top__DOT____Vlvbound_h9bff81b0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h9bff81b0__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h9bff81b0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h9bff81b0__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__41__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__in = vlSelfRef.ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__41__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__41__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__41__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                                 [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                           [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U));
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level 
            = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout 
        = ((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__42__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__42__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                                 [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                           [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U));
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level 
            = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level);
    }
}
