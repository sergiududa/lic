// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_IfE_H__
#define __conv_layer2_conv_IfE_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_IfE_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 19;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_layer2_conv_IfE_ram) {
        ram[0] = "0b1010110100101100101";
        ram[1] = "0b0100110010100010001";
        ram[2] = "0b1011000101110000110";
        ram[3] = "0b0100000010001010111";
        ram[4] = "0b1011011000010000101";
        ram[5] = "0b0101101111100101101";
        ram[6] = "0b1100111111010111110";
        ram[7] = "0b1011000000100001100";
        ram[8] = "0b0111000001000100000";
        ram[9] = "0b1001101000101111001";
        ram[10] = "0b1010101001011011010";
        ram[11] = "0b1001000111100010110";
        ram[12] = "0b0010110101000111111";
        ram[13] = "0b0000100000111001110";
        ram[14] = "0b1100001011001000111";
        ram[15] = "0b1001101100111110011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv_layer2_conv_IfE) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_IfE_ram* meminst;


SC_CTOR(conv_layer2_conv_IfE) {
meminst = new conv_layer2_conv_IfE_ram("conv_layer2_conv_IfE_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_IfE() {
    delete meminst;
}


};//endmodule
#endif
