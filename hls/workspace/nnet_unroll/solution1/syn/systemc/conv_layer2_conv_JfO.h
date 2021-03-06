// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_JfO_H__
#define __conv_layer2_conv_JfO_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_JfO_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_JfO_ram) {
        ram[0] = "0b1110111100001011100";
        ram[1] = "0b0100000001110010111";
        ram[2] = "0b1110101110011110010";
        ram[3] = "0b1100110110000010110";
        ram[4] = "0b1011111010011101000";
        ram[5] = "0b0011001100110100011";
        ram[6] = "0b0011110010000110000";
        ram[7] = "0b1010001111001010100";
        ram[8] = "0b1011000011100011011";
        ram[9] = "0b1010011101110011011";
        ram[10] = "0b0101011100100100101";
        ram[11] = "0b1110101101110100001";
        ram[12] = "0b1001101000010101000";
        ram[13] = "0b0101100110110000011";
        ram[14] = "0b0011011011111111001";
        ram[15] = "0b0000100100010000000";


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


SC_MODULE(conv_layer2_conv_JfO) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_JfO_ram* meminst;


SC_CTOR(conv_layer2_conv_JfO) {
meminst = new conv_layer2_conv_JfO_ram("conv_layer2_conv_JfO_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_JfO() {
    delete meminst;
}


};//endmodule
#endif
