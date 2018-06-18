// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_ejP_H__
#define __conv_layer2_conv_ejP_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_ejP_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 11;
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


   SC_CTOR(conv_layer2_conv_ejP_ram) {
        ram[0] = "0b11011101111";
        ram[1] = "0b01011110010";
        ram[2] = "0b00110101010";
        ram[3] = "0b10100010010";
        ram[4] = "0b10011110010";
        ram[5] = "0b10000001010";
        ram[6] = "0b10010000110";
        ram[7] = "0b10101101111";
        ram[8] = "0b11111100100";
        ram[9] = "0b10110000101";
        ram[10] = "0b00001000001";
        ram[11] = "0b11001111111";
        ram[12] = "0b01111000010";
        ram[13] = "0b11001100111";
        ram[14] = "0b01111001111";
        ram[15] = "0b11010000000";


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


SC_MODULE(conv_layer2_conv_ejP) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_ejP_ram* meminst;


SC_CTOR(conv_layer2_conv_ejP) {
meminst = new conv_layer2_conv_ejP_ram("conv_layer2_conv_ejP_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_ejP() {
    delete meminst;
}


};//endmodule
#endif