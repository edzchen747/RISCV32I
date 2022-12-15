#!/bin/sh

# cleanup
rm -rf 0bj_dir #ll
rm -f top.vcd #ll

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace top.sv ALU.sv data_mem.sv instr_mem.sv control.sv pc.sv register.sv sign_ext.sv pipeline.sv --exe top_tb.cpp #uu

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

# run executable simulation file
obj_dir/Vtop