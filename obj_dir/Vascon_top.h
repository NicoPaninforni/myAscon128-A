// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VASCON_TOP_H_
#define VERILATED_VASCON_TOP_H_  // guard

#include "verilated.h"

class Vascon_top__Syms;
class Vascon_top___024root;
class VerilatedVcdC;
class Vascon_top_ascon_sbox_d2;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vascon_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vascon_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset_n,0,0);
    VL_IN8(&start,0,0);
    VL_IN8(&key_valid,0,0);
    VL_IN8(&valid_data_in,0,0);
    VL_IN8(&last_block,0,0);
    VL_IN8(&valid_bytes,3,0);
    VL_IN8(&EOT,0,0);
    VL_IN8(&random_masks_sbox,2,0);
    VL_OUT8(&ciphertext_valid,0,0);
    VL_OUT8(&done,0,0);
    VL_OUT8(&ready_tag,0,0);
    VL_OUT8(&ready_for_data,0,0);
    VL_OUT8(&debug_extra_padding_ff,0,0);
    VL_OUT8(&debug_bitcounter,2,0);
    VL_OUT8(&debug_roundcounter,3,0);
    VL_OUT8(&debug_state,4,0);
    VL_INW(&data_in,127,0,4);
    VL_INW(&random_masks,219,0,7);
    VL_OUTW(&ciphertext,127,0,4);
    VL_IN64(&key1,63,0);
    VL_IN64(&key2,63,0);
    VL_IN64(&nonce1,63,0);
    VL_IN64(&nonce2,63,0);
    VL_IN64(&initialVector,63,0);
    VL_OUT64(&tag1,63,0);
    VL_OUT64(&tag2,63,0);
    VL_OUT64(&debug_state_0,63,0);
    VL_OUT64(&debug_state_1,63,0);
    VL_OUT64(&debug_state_2,63,0);
    VL_OUT64(&debug_state_3,63,0);
    VL_OUT64(&debug_state_4,63,0);
    VL_OUT64(&debug_round_state_0,63,0);
    VL_OUT64(&debug_round_state_1,63,0);
    VL_OUT64(&debug_round_state_2,63,0);
    VL_OUT64(&debug_round_state_3,63,0);
    VL_OUT64(&debug_round_state_4,63,0);
    VL_OUT64(&debug_linear_diffusion_state3,63,0);
    VL_OUT64(&debug_linear_diffusion_state4,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox;
    Vascon_top_ascon_sbox_d2* const __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vascon_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vascon_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vascon_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vascon_top();
  private:
    VL_UNCOPYABLE(Vascon_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
