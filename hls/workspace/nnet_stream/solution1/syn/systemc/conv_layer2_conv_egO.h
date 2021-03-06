// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_egO_H__
#define __conv_layer2_conv_egO_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_egO_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_egO_ram) {
        ram[0] = "0b10010010010";
        ram[1] = "0b01001100101";
        ram[2] = "0b01000010100";
        ram[3] = "0b11010011111";
        ram[4] = "0b10110000001";
        ram[5] = "0b10011011001";
        ram[6] = "0b11100101111";
        ram[7] = "0b01001101001";
        ram[8] = "0b10010110011";
        ram[9] = "0b01100001110";
        ram[10] = "0b11100001100";
        ram[11] = "0b01010011000";
        ram[12] = "0b00011100001";
        ram[13] = "0b10100111010";
        ram[14] = "0b00100101111";
        ram[15] = "0b01111000001";


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


SC_MODULE(conv_layer2_conv_egO) {


static const unsigned DataWidth = 11;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_egO_ram* meminst;


SC_CTOR(conv_layer2_conv_egO) {
meminst = new conv_layer2_conv_egO_ram("conv_layer2_conv_egO_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_egO() {
    delete meminst;
}


};//endmodule
#endif
