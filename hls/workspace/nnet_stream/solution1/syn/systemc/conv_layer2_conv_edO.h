// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_edO_H__
#define __conv_layer2_conv_edO_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_edO_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_edO_ram) {
        ram[0] = "0b11101111000";
        ram[1] = "0b01000000011";
        ram[2] = "0b11101011100";
        ram[3] = "0b11001101100";
        ram[4] = "0b10111110100";
        ram[5] = "0b00110011001";
        ram[6] = "0b00111100100";
        ram[7] = "0b10100011110";
        ram[8] = "0b10110000111";
        ram[9] = "0b10100111011";
        ram[10] = "0b01010111001";
        ram[11] = "0b11101011011";
        ram[12] = "0b10011010000";
        ram[13] = "0b01011001101";
        ram[14] = "0b00110110111";
        ram[15] = "0b00001001000";


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


SC_MODULE(conv_layer2_conv_edO) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_edO_ram* meminst;


SC_CTOR(conv_layer2_conv_edO) {
meminst = new conv_layer2_conv_edO_ram("conv_layer2_conv_edO_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_edO() {
    delete meminst;
}


};//endmodule
#endif
