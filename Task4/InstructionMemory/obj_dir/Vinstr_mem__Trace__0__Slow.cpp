// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstr_mem__Syms.h"


VL_ATTR_COLD void Vinstr_mem___024root__trace_init_sub__TOP__0(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+29,"A", false,-1, 31,0);
    tracep->declBus(c+30,"RD", false,-1, 31,0);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+29,"A", false,-1, 31,0);
    tracep->declBus(c+30,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_init_top(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_init_top\n"); );
    // Body
    Vinstr_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstr_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstr_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinstr_mem___024root__trace_register(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vinstr_mem___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vinstr_mem___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vinstr_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_full_top_0\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vinstr_mem___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->instr_mem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->instr_mem__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->instr_mem__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->instr_mem__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->instr_mem__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->instr_mem__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->instr_mem__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->instr_mem__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->instr_mem__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->instr_mem__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->instr_mem__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->instr_mem__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->instr_mem__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->instr_mem__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->instr_mem__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->instr_mem__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->instr_mem__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->instr_mem__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->instr_mem__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->instr_mem__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->instr_mem__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->instr_mem__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->instr_mem__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->instr_mem__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->instr_mem__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->instr_mem__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->instr_mem__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->instr_mem__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->A),32);
    bufp->fullIData(oldp+30,(vlSelf->RD),32);
}