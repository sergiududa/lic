// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module conv_layer1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0
);

parameter    ap_ST_fsm_state1 = 23'd1;
parameter    ap_ST_fsm_state2 = 23'd2;
parameter    ap_ST_fsm_state3 = 23'd4;
parameter    ap_ST_fsm_state4 = 23'd8;
parameter    ap_ST_fsm_state5 = 23'd16;
parameter    ap_ST_fsm_state6 = 23'd32;
parameter    ap_ST_fsm_state7 = 23'd64;
parameter    ap_ST_fsm_state8 = 23'd128;
parameter    ap_ST_fsm_state9 = 23'd256;
parameter    ap_ST_fsm_state10 = 23'd512;
parameter    ap_ST_fsm_state11 = 23'd1024;
parameter    ap_ST_fsm_state12 = 23'd2048;
parameter    ap_ST_fsm_state13 = 23'd4096;
parameter    ap_ST_fsm_state14 = 23'd8192;
parameter    ap_ST_fsm_state15 = 23'd16384;
parameter    ap_ST_fsm_state16 = 23'd32768;
parameter    ap_ST_fsm_state17 = 23'd65536;
parameter    ap_ST_fsm_state18 = 23'd131072;
parameter    ap_ST_fsm_state19 = 23'd262144;
parameter    ap_ST_fsm_state20 = 23'd524288;
parameter    ap_ST_fsm_state21 = 23'd1048576;
parameter    ap_ST_fsm_state22 = 23'd2097152;
parameter    ap_ST_fsm_state23 = 23'd4194304;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [12:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [31:0] output_r_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_r_ce0;
reg output_r_we0;

(* fsm_encoding = "none" *) reg   [22:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] conv_layer1_bias_address0;
reg    conv_layer1_bias_ce0;
wire   [31:0] conv_layer1_bias_q0;
wire   [9:0] image_0_address0;
reg    image_0_ce0;
wire   [31:0] image_0_q0;
wire   [6:0] conv_layer1_weights_s_address0;
reg    conv_layer1_weights_s_ce0;
wire   [31:0] conv_layer1_weights_s_q0;
wire   [3:0] filter_2_fu_225_p2;
reg   [3:0] filter_2_reg_451;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond5_fu_219_p2;
wire   [8:0] tmp_cast1_fu_236_p1;
reg   [8:0] tmp_cast1_reg_461;
wire    ap_CS_fsm_state3;
wire   [13:0] tmp_cast_fu_240_p1;
reg   [13:0] tmp_cast_reg_466;
reg   [31:0] conv_layer1_bias_loa_reg_471;
wire   [9:0] next_mul_fu_244_p2;
reg   [9:0] next_mul_reg_476;
wire    ap_CS_fsm_state4;
wire   [4:0] i_6_fu_256_p2;
reg   [4:0] i_6_reg_484;
wire   [4:0] j_6_fu_268_p2;
reg   [4:0] j_6_reg_492;
wire    ap_CS_fsm_state5;
wire   [2:0] row_offset_2_fu_284_p2;
reg   [2:0] row_offset_2_reg_500;
wire    ap_CS_fsm_state6;
wire   [4:0] tmp_29_fu_290_p2;
reg   [4:0] tmp_29_reg_505;
wire   [0:0] exitcond2_fu_278_p2;
wire   [5:0] tmp_103_cast_fu_304_p1;
reg   [5:0] tmp_103_cast_reg_510;
wire   [13:0] tmp_68_fu_330_p2;
reg   [13:0] tmp_68_reg_515;
wire   [2:0] col_offset_2_fu_345_p2;
reg   [2:0] col_offset_2_reg_523;
wire    ap_CS_fsm_state7;
wire   [0:0] exitcond1_fu_339_p2;
reg   [31:0] image_0_load_reg_538;
wire    ap_CS_fsm_state8;
reg   [31:0] conv_layer1_weights_1_reg_543;
wire   [31:0] grp_fu_210_p2;
reg   [31:0] tmp_35_reg_548;
wire    ap_CS_fsm_state12;
wire   [31:0] grp_fu_204_p2;
wire    ap_CS_fsm_state17;
reg   [31:0] a_assign_reg_558;
wire    ap_CS_fsm_state21;
wire   [31:0] a_assign_7_fu_437_p3;
reg   [31:0] a_assign_7_reg_565;
wire    ap_CS_fsm_state22;
reg   [3:0] filter_reg_110;
wire   [0:0] exitcond4_fu_250_p2;
reg   [4:0] i_reg_122;
wire   [0:0] exitcond3_fu_262_p2;
reg   [9:0] phi_mul_reg_134;
reg   [4:0] j_reg_146;
wire    ap_CS_fsm_state23;
reg   [31:0] sum_reg_158;
reg   [2:0] row_offset_reg_170;
reg   [31:0] sum_1_reg_181;
reg   [2:0] col_offset_reg_193;
wire   [63:0] tmp_fu_231_p1;
wire   [63:0] tmp_71_fu_364_p1;
wire   [63:0] tmp_109_cast_fu_391_p1;
wire   [63:0] tmp_101_cast_fu_444_p1;
reg   [31:0] grp_fu_204_p0;
reg   [31:0] grp_fu_204_p1;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state9;
wire   [4:0] row_offset_cast4_fu_274_p1;
wire   [4:0] tmp_69_fu_296_p3;
wire   [9:0] tmp_28_cast_fu_308_p1;
wire   [9:0] tmp_s_fu_312_p2;
wire   [12:0] tmp_54_fu_318_p3;
wire   [13:0] tmp_100_cast_fu_326_p1;
wire   [4:0] col_offset_cast2_fu_335_p1;
wire   [4:0] tmp_32_fu_351_p2;
wire   [9:0] tmp_70_fu_357_p3;
wire   [5:0] tmp_34_cast_fu_369_p1;
wire   [5:0] tmp_72_fu_373_p2;
wire   [8:0] tmp_108_cast_fu_378_p3;
wire   [8:0] tmp_73_fu_386_p2;
wire   [31:0] a_assign_to_int_fu_396_p1;
wire   [7:0] tmp_46_fu_399_p4;
wire   [22:0] tmp_53_fu_409_p1;
wire   [0:0] notrhs_fu_419_p2;
wire   [0:0] notlhs_fu_413_p2;
wire   [0:0] tmp_48_fu_425_p2;
wire   [0:0] tmp_49_fu_214_p2;
wire   [0:0] tmp_50_fu_431_p2;
reg   [22:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 23'd1;
end

conv_layer1_conv_bkb #(
    .DataWidth( 32 ),
    .AddressRange( 8 ),
    .AddressWidth( 3 ))
conv_layer1_bias_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(conv_layer1_bias_address0),
    .ce0(conv_layer1_bias_ce0),
    .q0(conv_layer1_bias_q0)
);

conv_layer1_image_0 #(
    .DataWidth( 32 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
image_0_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(image_0_address0),
    .ce0(image_0_ce0),
    .q0(image_0_q0)
);

conv_layer1_conv_cud #(
    .DataWidth( 32 ),
    .AddressRange( 128 ),
    .AddressWidth( 7 ))
conv_layer1_weights_s_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(conv_layer1_weights_s_address0),
    .ce0(conv_layer1_weights_s_ce0),
    .q0(conv_layer1_weights_s_q0)
);

nnet_fadd_32ns_32dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
nnet_fadd_32ns_32dEe_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_204_p0),
    .din1(grp_fu_204_p1),
    .ce(1'b1),
    .dout(grp_fu_204_p2)
);

nnet_fmul_32ns_32eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
nnet_fmul_32ns_32eOg_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(image_0_load_reg_538),
    .din1(conv_layer1_weights_1_reg_543),
    .ce(1'b1),
    .dout(grp_fu_210_p2)
);

nnet_fcmp_32ns_32fYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
nnet_fcmp_32ns_32fYi_U3(
    .din0(a_assign_reg_558),
    .din1(32'd0),
    .opcode(5'd2),
    .dout(tmp_49_fu_214_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_278_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        col_offset_reg_193 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        col_offset_reg_193 <= col_offset_2_reg_523;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond4_fu_250_p2 == 1'd1))) begin
        filter_reg_110 <= filter_2_reg_451;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        filter_reg_110 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond3_fu_262_p2 == 1'd1))) begin
        i_reg_122 <= i_6_reg_484;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        i_reg_122 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_250_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_146 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state23)) begin
        j_reg_146 <= j_6_reg_492;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond3_fu_262_p2 == 1'd1))) begin
        phi_mul_reg_134 <= next_mul_reg_476;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        phi_mul_reg_134 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_262_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        row_offset_reg_170 <= 3'd0;
    end else if (((1'b1 == ap_CS_fsm_state7) & (exitcond1_fu_339_p2 == 1'd1))) begin
        row_offset_reg_170 <= row_offset_2_reg_500;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_278_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        sum_1_reg_181 <= sum_reg_158;
    end else if ((1'b1 == ap_CS_fsm_state17)) begin
        sum_1_reg_181 <= grp_fu_204_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_262_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        sum_reg_158 <= 32'd0;
    end else if (((1'b1 == ap_CS_fsm_state7) & (exitcond1_fu_339_p2 == 1'd1))) begin
        sum_reg_158 <= sum_1_reg_181;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state22)) begin
        a_assign_7_reg_565 <= a_assign_7_fu_437_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state21)) begin
        a_assign_reg_558 <= grp_fu_204_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        col_offset_2_reg_523 <= col_offset_2_fu_345_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        conv_layer1_bias_loa_reg_471 <= conv_layer1_bias_q0;
        tmp_cast1_reg_461[3 : 0] <= tmp_cast1_fu_236_p1[3 : 0];
        tmp_cast_reg_466[3 : 0] <= tmp_cast_fu_240_p1[3 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        conv_layer1_weights_1_reg_543 <= conv_layer1_weights_s_q0;
        image_0_load_reg_538 <= image_0_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        filter_2_reg_451 <= filter_2_fu_225_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_6_reg_484 <= i_6_fu_256_p2;
        next_mul_reg_476 <= next_mul_fu_244_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        j_6_reg_492 <= j_6_fu_268_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        row_offset_2_reg_500 <= row_offset_2_fu_284_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_278_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        tmp_103_cast_reg_510[4 : 2] <= tmp_103_cast_fu_304_p1[4 : 2];
        tmp_29_reg_505 <= tmp_29_fu_290_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        tmp_35_reg_548 <= grp_fu_210_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (exitcond2_fu_278_p2 == 1'd1))) begin
        tmp_68_reg_515 <= tmp_68_fu_330_p2;
    end
end

always @ (*) begin
    if ((((exitcond5_fu_219_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond5_fu_219_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        conv_layer1_bias_ce0 = 1'b1;
    end else begin
        conv_layer1_bias_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        conv_layer1_weights_s_ce0 = 1'b1;
    end else begin
        conv_layer1_weights_s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        grp_fu_204_p0 = sum_1_reg_181;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_fu_204_p0 = sum_reg_158;
    end else begin
        grp_fu_204_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        grp_fu_204_p1 = tmp_35_reg_548;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        grp_fu_204_p1 = conv_layer1_bias_loa_reg_471;
    end else begin
        grp_fu_204_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        image_0_ce0 = 1'b1;
    end else begin
        image_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond5_fu_219_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond4_fu_250_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond3_fu_262_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond2_fu_278_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (exitcond1_fu_339_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_7_fu_437_p3 = ((tmp_50_fu_431_p2[0:0] === 1'b1) ? a_assign_reg_558 : 32'd0);

assign a_assign_to_int_fu_396_p1 = a_assign_reg_558;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign col_offset_2_fu_345_p2 = (col_offset_reg_193 + 3'd1);

assign col_offset_cast2_fu_335_p1 = col_offset_reg_193;

assign conv_layer1_bias_address0 = tmp_fu_231_p1;

assign conv_layer1_weights_s_address0 = tmp_109_cast_fu_391_p1;

assign exitcond1_fu_339_p2 = ((col_offset_reg_193 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_278_p2 = ((row_offset_reg_170 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond3_fu_262_p2 = ((j_reg_146 == 5'd29) ? 1'b1 : 1'b0);

assign exitcond4_fu_250_p2 = ((i_reg_122 == 5'd29) ? 1'b1 : 1'b0);

assign exitcond5_fu_219_p2 = ((filter_reg_110 == 4'd8) ? 1'b1 : 1'b0);

assign filter_2_fu_225_p2 = (filter_reg_110 + 4'd1);

assign i_6_fu_256_p2 = (i_reg_122 + 5'd1);

assign image_0_address0 = tmp_71_fu_364_p1;

assign j_6_fu_268_p2 = (j_reg_146 + 5'd1);

assign next_mul_fu_244_p2 = (phi_mul_reg_134 + 10'd29);

assign notlhs_fu_413_p2 = ((tmp_46_fu_399_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notrhs_fu_419_p2 = ((tmp_53_fu_409_p1 == 23'd0) ? 1'b1 : 1'b0);

assign output_r_address0 = tmp_101_cast_fu_444_p1;

assign output_r_d0 = a_assign_7_reg_565;

assign row_offset_2_fu_284_p2 = (row_offset_reg_170 + 3'd1);

assign row_offset_cast4_fu_274_p1 = row_offset_reg_170;

assign tmp_100_cast_fu_326_p1 = tmp_54_fu_318_p3;

assign tmp_101_cast_fu_444_p1 = tmp_68_reg_515;

assign tmp_103_cast_fu_304_p1 = tmp_69_fu_296_p3;

assign tmp_108_cast_fu_378_p3 = {{tmp_72_fu_373_p2}, {3'd0}};

assign tmp_109_cast_fu_391_p1 = tmp_73_fu_386_p2;

assign tmp_28_cast_fu_308_p1 = j_reg_146;

assign tmp_29_fu_290_p2 = (i_reg_122 + row_offset_cast4_fu_274_p1);

assign tmp_32_fu_351_p2 = (col_offset_cast2_fu_335_p1 + j_reg_146);

assign tmp_34_cast_fu_369_p1 = col_offset_reg_193;

assign tmp_46_fu_399_p4 = {{a_assign_to_int_fu_396_p1[30:23]}};

assign tmp_48_fu_425_p2 = (notrhs_fu_419_p2 | notlhs_fu_413_p2);

assign tmp_50_fu_431_p2 = (tmp_49_fu_214_p2 & tmp_48_fu_425_p2);

assign tmp_53_fu_409_p1 = a_assign_to_int_fu_396_p1[22:0];

assign tmp_54_fu_318_p3 = {{tmp_s_fu_312_p2}, {3'd0}};

assign tmp_68_fu_330_p2 = (tmp_cast_reg_466 + tmp_100_cast_fu_326_p1);

assign tmp_69_fu_296_p3 = {{row_offset_reg_170}, {2'd0}};

assign tmp_70_fu_357_p3 = {{tmp_29_reg_505}, {tmp_32_fu_351_p2}};

assign tmp_71_fu_364_p1 = tmp_70_fu_357_p3;

assign tmp_72_fu_373_p2 = (tmp_103_cast_reg_510 + tmp_34_cast_fu_369_p1);

assign tmp_73_fu_386_p2 = (tmp_108_cast_fu_378_p3 + tmp_cast1_reg_461);

assign tmp_cast1_fu_236_p1 = filter_reg_110;

assign tmp_cast_fu_240_p1 = filter_reg_110;

assign tmp_fu_231_p1 = filter_reg_110;

assign tmp_s_fu_312_p2 = (tmp_28_cast_fu_308_p1 + phi_mul_reg_134);

always @ (posedge ap_clk) begin
    tmp_cast1_reg_461[8:4] <= 5'b00000;
    tmp_cast_reg_466[13:4] <= 10'b0000000000;
    tmp_103_cast_reg_510[1:0] <= 2'b00;
    tmp_103_cast_reg_510[5] <= 1'b0;
end

endmodule //conv_layer1
