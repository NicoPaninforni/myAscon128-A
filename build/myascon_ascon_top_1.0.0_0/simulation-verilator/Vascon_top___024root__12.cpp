// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

VL_INLINE_OPT void Vascon_top___024root___combo__TOP__31(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___combo__TOP__31\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__320__x;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__321__x;
    // Body
    vlSelf->ready_for_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                                   & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                            vlSelf->ready_for_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                               & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                        vlSelf->ready_for_data = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ciphertext_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ciphertext_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    } else if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__write_en = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__write_en = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            } else {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            }
        } else {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    }
    vlSelf->ascon_top__DOT__sel_absorb_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_init_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_init_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__sel_padding = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
        = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            } else if ((1U & (~ (IData)(vlSelf->start)))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 0x14U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x13U : 0x10U));
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x12U;
        } else if ((0x40U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x11U;
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                        ? 0xbU : 0xcU);
            } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                        == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                            - (IData)(1U))) ? 0xfU : 0xeU);
            } else if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if (vlSelf->valid_data_in) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0xcU;
                    if (((IData)(vlSelf->EOT) & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                    }
                } else if (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                            & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding)))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 0x10U;
                }
            } else {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                    = (((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff) 
                        & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))
                        ? 0xbU : 6U);
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 7U : (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U))) ? 0xaU
                             : 9U));
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 8U;
                }
            } else if (((IData)(vlSelf->valid_data_in) 
                        | (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 7U;
            }
        } else {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                    ? 6U : 2U);
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state 
                = (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                    == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                        - (IData)(1U))) ? 5U : 4U);
        } else if ((0x40U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if (vlSelf->start) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 2U;
        }
    } else if (vlSelf->load_data) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
        if (vlSelf->ascon_top__DOT__sel_padding) {
            vlSelf->ascon_top__DOT__unnamedblk4__DOT__i = 0x10U;
        }
    }
    if (vlSelf->ascon_top__DOT__extra_padding_ff) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0x1000000U;
    } else if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__data_in_padded[0U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[1U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[2U] = 0U;
        vlSelf->ascon_top__DOT__data_in_padded[3U] = 0U;
        if ((0U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff000000U & vlSelf->data_in[3U]));
        }
        if ((1U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff0000U & vlSelf->data_in[3U]));
        }
        if ((2U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xff00U & vlSelf->data_in[3U]));
        }
        if ((3U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[3U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[3U]) 
                   | (0xffU & vlSelf->data_in[3U]));
        }
        if ((4U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff000000U & vlSelf->data_in[2U]));
        }
        if ((5U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff0000U & vlSelf->data_in[2U]));
        }
        if ((6U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xff00U & vlSelf->data_in[2U]));
        }
        if ((7U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[2U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[2U]) 
                   | (0xffU & vlSelf->data_in[2U]));
        }
        if ((8U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff000000U & vlSelf->data_in[1U]));
        }
        if ((9U < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff0000U & vlSelf->data_in[1U]));
        }
        if ((0xaU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xff00U & vlSelf->data_in[1U]));
        }
        if ((0xbU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[1U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[1U]) 
                   | (0xffU & vlSelf->data_in[1U]));
        }
        if ((0xcU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff000000U & vlSelf->data_in[0U]));
        }
        if ((0xdU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xff00ffffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff0000U & vlSelf->data_in[0U]));
        }
        if ((0xeU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffff00ffU & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xff00U & vlSelf->data_in[0U]));
        }
        if ((0xfU < (IData)(vlSelf->valid_bytes))) {
            vlSelf->ascon_top__DOT__data_in_padded[0U] 
                = ((0xffffff00U & vlSelf->ascon_top__DOT__data_in_padded[0U]) 
                   | (0xffU & vlSelf->data_in[0U]));
        }
        VL_ASSIGNSEL_WIII(128,8,(0x7fU & (((IData)(0x7fU) 
                                           - ((IData)(vlSelf->valid_bytes) 
                                              << 3U)) 
                                          - (IData)(7U))), vlSelf->ascon_top__DOT__data_in_padded, 1U);
    } else {
        vlSelf->ascon_top__DOT__data_in_padded[0U] 
            = vlSelf->data_in[0U];
        vlSelf->ascon_top__DOT__data_in_padded[1U] 
            = vlSelf->data_in[1U];
        vlSelf->ascon_top__DOT__data_in_padded[2U] 
            = vlSelf->data_in[2U];
        vlSelf->ascon_top__DOT__data_in_padded[3U] 
            = vlSelf->data_in[3U];
    }
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
        = vlSelf->data_in[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
        = vlSelf->data_in[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
        = vlSelf->data_in[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__321__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__321__y[3U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
        = vlSelf->ascon_top__DOT__data_in_padded[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
        = vlSelf->ascon_top__DOT__data_in_padded[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
        = vlSelf->ascon_top__DOT__data_in_padded[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
        = vlSelf->ascon_top__DOT__data_in_padded[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__320__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__320__y[3U];
    if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__320__Vfuncout[3U];
    } else {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__321__Vfuncout[3U];
    }
    vlSelf->ascon_top__DOT__state_reg_in_absorb[0U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[0U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[3U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[1U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[2U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[0U]))));
    vlSelf->ciphertext[0U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [0U]);
    vlSelf->ciphertext[1U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [0U] >> 0x20U));
    vlSelf->ciphertext[2U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [1U]);
    vlSelf->ciphertext[3U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [1U] >> 0x20U));
    if (vlSelf->ascon_top__DOT__sel_absorb_data) {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [0U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [0U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [0U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [1U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [1U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [1U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [2U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [2U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [3U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [3U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [4U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [4U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [4U] 
                                                      >> 0x20U)));
    } else {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->initialVector) : (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->ascon_top__DOT__linear_diffusion_out[0U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->initialVector >> 0x20U))
                : (IData)(((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                           >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key1) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[2U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key1 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key2) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[4U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key2 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce1) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                                      ? 
                                                     (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                      [3U] 
                                                      ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                                      : 
                                                     vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                     [3U])));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce1 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [3U]) >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce2) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                                      ? 
                                                     (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                      [4U] 
                                                      ^ 
                                                      ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                        ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                        : 0x8000000000000000ULL))
                                                      : 
                                                     vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                     [4U])));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce2 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                         ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                         : 0x8000000000000000ULL))
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [4U]) >> 0x20U)));
    }
}

VL_INLINE_OPT void Vascon_top___024root___multiclk__TOP__32(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___multiclk__TOP__32\n"); );
    // Variables
    CData/*4:0*/ ascon_top__DOT____Vlvbound322;
    CData/*4:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    // Body
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                     << 4U)) | ((8U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0))))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x1fU & (IData)(vlSelf->ascon_top__DOT__lfsr_out));
    vlSelf->ascon_top__DOT__shares_out = ((0x7c1fU 
                                           & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | ((IData)(ascon_top__DOT__share_creator__DOT____Vlvbound1) 
                                             << 5U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp) 
                    ^ (IData)(vlSelf->ascon_top__DOT__lfsr_out)));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 5U));
    vlSelf->ascon_top__DOT__shares_out = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | ((IData)(ascon_top__DOT__share_creator__DOT____Vlvbound1) 
                                             << 0xaU));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp) 
                    ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                       >> 5U)));
    vlSelf->ascon_top__DOT__shares_out = ((0x7fe0U 
                                           & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | (IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp));
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output[0U];
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x1fU & (IData)(vlSelf->ascon_top__DOT__shares_out));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__shares_out) 
                        >> 5U));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__shares_out) 
                        >> 0xaU));
    } else {
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0U];
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 4U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 3U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 2U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                    << 1U)) 
                                                | ((2U 
                                                    & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x0) 
                                                         >> 1U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 2U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 1U)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x0) 
                                                         >> 2U)))))));
    }
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (1U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [0U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer_out[0U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [0U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [0U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [0U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [0U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [0U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [0U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [0U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [0U] 
                                                 >> 4U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[1U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [1U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [1U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [1U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [1U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [1U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [1U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [1U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [1U] 
                                                 >> 4U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[2U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [2U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [2U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [2U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [2U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [2U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [2U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [2U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [2U] 
                                                 >> 4U)))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [0U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [0U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [0U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [0U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [0U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0U] 
                                                  >> 4U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [1U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [1U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [1U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [1U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [1U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [1U] 
                                                  >> 4U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [2U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [2U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [2U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [2U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [2U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [2U] 
                                                  >> 4U))))))));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (1U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 0xaU)));
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U] 
        = ascon_top__DOT____Vlvbound322;
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U] 
        = ascon_top__DOT____Vlvbound322;
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U] 
        = ascon_top__DOT____Vlvbound322;
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [0U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [1U] << 1U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [2U] << 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [0U] << 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [1U] << 3U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [2U] << 4U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [0U] << 4U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [1U] << 5U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [2U] << 6U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [0U] << 6U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [1U] << 7U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [2U] << 8U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [0U] << 8U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [1U] << 9U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [2U] << 0xaU)));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
}

VL_INLINE_OPT void Vascon_top___024root___combo__TOP__33(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___combo__TOP__33\n"); );
    // Variables
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    // Body
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][0U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][3U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][2U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][5U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][4U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][7U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][6U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][9U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][8U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
}

void Vascon_top___024root___sequent__TOP__18(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__19(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__20(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__21(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__22(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__23(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__24(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__25(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__26(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__27(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__28(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__29(Vascon_top___024root* vlSelf);
void Vascon_top___024root___sequent__TOP__30(Vascon_top___024root* vlSelf);

void Vascon_top___024root___eval(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Vascon_top___024root___sequent__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vascon_top___024root___sequent__TOP__19(vlSelf);
        Vascon_top___024root___sequent__TOP__20(vlSelf);
        Vascon_top___024root___sequent__TOP__21(vlSelf);
        Vascon_top___024root___sequent__TOP__22(vlSelf);
        Vascon_top___024root___sequent__TOP__23(vlSelf);
        Vascon_top___024root___sequent__TOP__24(vlSelf);
        Vascon_top___024root___sequent__TOP__25(vlSelf);
        Vascon_top___024root___sequent__TOP__26(vlSelf);
        Vascon_top___024root___sequent__TOP__27(vlSelf);
        Vascon_top___024root___sequent__TOP__28(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vascon_top___024root___sequent__TOP__29(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n_lfsr)) & (IData)(vlSelf->__Vclklast__TOP__reset_n_lfsr)))) {
        Vascon_top___024root___sequent__TOP__30(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vascon_top___024root___combo__TOP__31(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n))) 
         | ((~ (IData)(vlSelf->reset_n_lfsr)) & (IData)(vlSelf->__Vclklast__TOP__reset_n_lfsr)))) {
        Vascon_top___024root___multiclk__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Vascon_top___024root___combo__TOP__33(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
    vlSelf->__Vclklast__TOP__reset_n_lfsr = vlSelf->reset_n_lfsr;
}

QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf);

VL_INLINE_OPT QData Vascon_top___024root___change_request(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request\n"); );
    // Body
    return (Vascon_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vascon_top___024root___change_request_1(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->reset_n_lfsr & 0xfeU))) {
        Verilated::overWidthError("reset_n_lfsr");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((vlSelf->load_data & 0xfeU))) {
        Verilated::overWidthError("load_data");}
    if (VL_UNLIKELY((vlSelf->valid_data_in & 0xfeU))) {
        Verilated::overWidthError("valid_data_in");}
    if (VL_UNLIKELY((vlSelf->last_block & 0xfeU))) {
        Verilated::overWidthError("last_block");}
    if (VL_UNLIKELY((vlSelf->valid_bytes & 0xe0U))) {
        Verilated::overWidthError("valid_bytes");}
    if (VL_UNLIKELY((vlSelf->EOT & 0xfeU))) {
        Verilated::overWidthError("EOT");}
}
#endif  // VL_DEBUG
