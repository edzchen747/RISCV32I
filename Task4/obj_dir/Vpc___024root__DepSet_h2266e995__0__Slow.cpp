// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc___024root.h"

VL_ATTR_COLD void Vpc___024root___eval_initial(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vpc___024root___combo__TOP__0(Vpc___024root* vlSelf);

VL_ATTR_COLD void Vpc___024root___eval_settle(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_settle\n"); );
    // Body
    Vpc___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpc___024root___final(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___final\n"); );
}

VL_ATTR_COLD void Vpc___024root___ctor_var_reset(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->PC_out = VL_RAND_RESET_I(32);
    vlSelf->pc__DOT__next_PC = VL_RAND_RESET_I(32);
}
