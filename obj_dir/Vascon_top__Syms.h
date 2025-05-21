// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASCON_TOP__SYMS_H_
#define VERILATED_VASCON_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vascon_top.h"

// INCLUDE MODULE CLASSES
#include "Vascon_top___024root.h"
#include "Vascon_top_ascon_sbox_d2.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vascon_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vascon_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vascon_top___024root           TOP;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2       TOP__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox;

    // CONSTRUCTORS
    Vascon_top__Syms(VerilatedContext* contextp, const char* namep, Vascon_top* modelp);
    ~Vascon_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
