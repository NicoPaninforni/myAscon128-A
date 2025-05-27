// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vascon_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vascon_top::Vascon_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vascon_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , start{vlSymsp->TOP.start}
    , key_valid{vlSymsp->TOP.key_valid}
    , valid_data_in{vlSymsp->TOP.valid_data_in}
    , last_block{vlSymsp->TOP.last_block}
    , valid_bytes{vlSymsp->TOP.valid_bytes}
    , EOT{vlSymsp->TOP.EOT}
    , random_masks_sbox{vlSymsp->TOP.random_masks_sbox}
    , ciphertext_valid{vlSymsp->TOP.ciphertext_valid}
    , done{vlSymsp->TOP.done}
    , ready_tag{vlSymsp->TOP.ready_tag}
    , ready_for_data{vlSymsp->TOP.ready_for_data}
    , debug_extra_padding_ff{vlSymsp->TOP.debug_extra_padding_ff}
    , debug_bitcounter{vlSymsp->TOP.debug_bitcounter}
    , debug_roundcounter{vlSymsp->TOP.debug_roundcounter}
    , debug_state{vlSymsp->TOP.debug_state}
    , data_in{vlSymsp->TOP.data_in}
    , random_masks{vlSymsp->TOP.random_masks}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , key1{vlSymsp->TOP.key1}
    , key2{vlSymsp->TOP.key2}
    , nonce1{vlSymsp->TOP.nonce1}
    , nonce2{vlSymsp->TOP.nonce2}
    , initialVector{vlSymsp->TOP.initialVector}
    , tag1{vlSymsp->TOP.tag1}
    , tag2{vlSymsp->TOP.tag2}
    , debug_state_0{vlSymsp->TOP.debug_state_0}
    , debug_state_1{vlSymsp->TOP.debug_state_1}
    , debug_state_2{vlSymsp->TOP.debug_state_2}
    , debug_state_3{vlSymsp->TOP.debug_state_3}
    , debug_state_4{vlSymsp->TOP.debug_state_4}
    , debug_round_state_0{vlSymsp->TOP.debug_round_state_0}
    , debug_round_state_1{vlSymsp->TOP.debug_round_state_1}
    , debug_round_state_2{vlSymsp->TOP.debug_round_state_2}
    , debug_round_state_3{vlSymsp->TOP.debug_round_state_3}
    , debug_round_state_4{vlSymsp->TOP.debug_round_state_4}
    , debug_linear_diffusion_state3{vlSymsp->TOP.debug_linear_diffusion_state3}
    , debug_linear_diffusion_state4{vlSymsp->TOP.debug_linear_diffusion_state4}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__6__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__7__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__8__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__9__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__10__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__11__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__12__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__13__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__14__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__15__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__16__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__17__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__18__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__19__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__20__KET____DOT__u_sbox}
    , __PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox{vlSymsp->TOP.__PVT__ascon_top__DOT__gen_cog__DOT__gen_sbox__BRA__21__KET____DOT__u_sbox}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vascon_top::Vascon_top(const char* _vcname__)
    : Vascon_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vascon_top::~Vascon_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vascon_top___024root___eval_static(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval(Vascon_top___024root* vlSelf);

void Vascon_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vascon_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vascon_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vascon_top___024root___eval_static(&(vlSymsp->TOP));
        Vascon_top___024root___eval_initial(&(vlSymsp->TOP));
        Vascon_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vascon_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vascon_top::eventsPending() { return false; }

uint64_t Vascon_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vascon_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vascon_top___024root___eval_final(Vascon_top___024root* vlSelf);

VL_ATTR_COLD void Vascon_top::final() {
    Vascon_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vascon_top::hierName() const { return vlSymsp->name(); }
const char* Vascon_top::modelName() const { return "Vascon_top"; }
unsigned Vascon_top::threads() const { return 1; }
void Vascon_top::prepareClone() const { contextp()->prepareClone(); }
void Vascon_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vascon_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vascon_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vascon_top___024root__trace_init_top(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vascon_top___024root__trace_decl_types(tracep);
    Vascon_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vascon_top___024root__trace_register(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vascon_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vascon_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vascon_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
