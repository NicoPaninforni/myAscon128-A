// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vascon_top.h"
#include "Vascon_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vascon_top::Vascon_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vascon_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , start{vlSymsp->TOP.start}
    , key1{vlSymsp->TOP.key1}
    , key2{vlSymsp->TOP.key2}
    , key_valid{vlSymsp->TOP.key_valid}
    , nonce1{vlSymsp->TOP.nonce1}
    , nonce2{vlSymsp->TOP.nonce2}
    , initialVector{vlSymsp->TOP.initialVector}
    , data_in{vlSymsp->TOP.data_in}
    , valid_data_in{vlSymsp->TOP.valid_data_in}
    , last_block{vlSymsp->TOP.last_block}
    , valid_bytes{vlSymsp->TOP.valid_bytes}
    , EOT{vlSymsp->TOP.EOT}
    , state_reg_out{vlSymsp->TOP.state_reg_out}
    , ciphertext_valid{vlSymsp->TOP.ciphertext_valid}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , done{vlSymsp->TOP.done}
    , ready_tag{vlSymsp->TOP.ready_tag}
    , tag1{vlSymsp->TOP.tag1}
    , tag2{vlSymsp->TOP.tag2}
    , ready_for_data{vlSymsp->TOP.ready_for_data}
    , read_data{vlSymsp->TOP.read_data}
    , debug_extra_padding_ff{vlSymsp->TOP.debug_extra_padding_ff}
    , debug_bitcounter{vlSymsp->TOP.debug_bitcounter}
    , debug_roundcounter{vlSymsp->TOP.debug_roundcounter}
    , debug_state{vlSymsp->TOP.debug_state}
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
    , rootp{&(vlSymsp->TOP)}
{
}

Vascon_top::Vascon_top(const char* _vcname__)
    : Vascon_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vascon_top::~Vascon_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf);
void Vascon_top___024root___eval(Vascon_top___024root* vlSelf);
QData Vascon_top___024root___change_request(Vascon_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vascon_top___024root___eval_debug_assertions(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vascon_top___024root___final(Vascon_top___024root* vlSelf);

static void _eval_initial_loop(Vascon_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vascon_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vascon_top___024root___eval_settle(&(vlSymsp->TOP));
        Vascon_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vascon_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/myascon_ascon_top_1.0.0_0/rtl/ascon_top.sv", 48, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vascon_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vascon_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vascon_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vascon_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vascon_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vascon_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/myascon_ascon_top_1.0.0_0/rtl/ascon_top.sv", 48, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vascon_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vascon_top::final() {
    Vascon_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vascon_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vascon_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vascon_top___024root__traceInitTop(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vascon_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vascon_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vascon_top___024root__traceRegister(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

void Vascon_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vascon_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
