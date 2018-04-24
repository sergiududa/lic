// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="conv2d,hls_ip_2017_4_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.159000,HLS_SYN_LAT=1305713,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=5,HLS_SYN_FF=787,HLS_SYN_LUT=1480}" *)

module conv2d (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0,
        image_r_address0,
        image_r_ce0,
        image_r_q0,
        weight_address0,
        weight_ce0,
        weight_q0,
        bias_address0,
        bias_ce0,
        bias_q0
);

parameter    ap_ST_fsm_state1 = 24'd1;
parameter    ap_ST_fsm_state2 = 24'd2;
parameter    ap_ST_fsm_state3 = 24'd4;
parameter    ap_ST_fsm_state4 = 24'd8;
parameter    ap_ST_fsm_state5 = 24'd16;
parameter    ap_ST_fsm_state6 = 24'd32;
parameter    ap_ST_fsm_state7 = 24'd64;
parameter    ap_ST_fsm_state8 = 24'd128;
parameter    ap_ST_fsm_state9 = 24'd256;
parameter    ap_ST_fsm_state10 = 24'd512;
parameter    ap_ST_fsm_state11 = 24'd1024;
parameter    ap_ST_fsm_state12 = 24'd2048;
parameter    ap_ST_fsm_state13 = 24'd4096;
parameter    ap_ST_fsm_state14 = 24'd8192;
parameter    ap_ST_fsm_state15 = 24'd16384;
parameter    ap_ST_fsm_state16 = 24'd32768;
parameter    ap_ST_fsm_state17 = 24'd65536;
parameter    ap_ST_fsm_state18 = 24'd131072;
parameter    ap_ST_fsm_state19 = 24'd262144;
parameter    ap_ST_fsm_state20 = 24'd524288;
parameter    ap_ST_fsm_state21 = 24'd1048576;
parameter    ap_ST_fsm_state22 = 24'd2097152;
parameter    ap_ST_fsm_state23 = 24'd4194304;
parameter    ap_ST_fsm_state24 = 24'd8388608;

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
output  [9:0] image_r_address0;
output   image_r_ce0;
input  [31:0] image_r_q0;
output  [6:0] weight_address0;
output   weight_ce0;
input  [31:0] weight_q0;
output  [2:0] bias_address0;
output   bias_ce0;
input  [31:0] bias_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_r_ce0;
reg output_r_we0;
reg image_r_ce0;
reg weight_ce0;
reg bias_ce0;

(* fsm_encoding = "none" *) reg   [23:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] filter_1_fu_229_p2;
reg   [3:0] filter_1_reg_455;
wire    ap_CS_fsm_state2;
wire   [8:0] tmp_cast1_fu_240_p1;
reg   [8:0] tmp_cast1_reg_460;
wire   [0:0] exitcond5_fu_223_p2;
wire   [13:0] tmp_cast_fu_244_p1;
reg   [13:0] tmp_cast_reg_465;
reg   [2:0] bias_addr_reg_470;
wire   [9:0] next_mul_fu_248_p2;
reg   [9:0] next_mul_reg_475;
wire    ap_CS_fsm_state3;
wire   [4:0] i_1_fu_260_p2;
reg   [4:0] i_1_reg_483;
wire   [4:0] j_1_fu_272_p2;
reg   [4:0] j_1_reg_491;
wire    ap_CS_fsm_state4;
wire   [2:0] row_offset_1_fu_288_p2;
reg   [2:0] row_offset_1_reg_499;
wire    ap_CS_fsm_state5;
wire   [4:0] tmp_9_fu_294_p2;
reg   [4:0] tmp_9_reg_504;
wire   [0:0] exitcond2_fu_282_p2;
wire   [5:0] tmp_17_cast_fu_308_p1;
reg   [5:0] tmp_17_cast_reg_509;
wire   [13:0] tmp_10_fu_334_p2;
reg   [13:0] tmp_10_reg_514;
wire   [2:0] col_offset_1_fu_349_p2;
reg   [2:0] col_offset_1_reg_522;
wire    ap_CS_fsm_state6;
wire   [0:0] exitcond1_fu_343_p2;
reg   [31:0] image_load_reg_537;
wire    ap_CS_fsm_state7;
reg   [31:0] weight_load_reg_542;
wire   [31:0] grp_fu_214_p2;
reg   [31:0] tmp_5_reg_547;
wire    ap_CS_fsm_state11;
wire   [31:0] grp_fu_208_p2;
wire    ap_CS_fsm_state16;
reg   [31:0] bias_load_reg_557;
wire    ap_CS_fsm_state17;
reg   [31:0] a_assign_reg_562;
wire    ap_CS_fsm_state22;
wire   [31:0] a_assign_1_fu_441_p3;
reg   [31:0] a_assign_1_reg_569;
wire    ap_CS_fsm_state23;
reg   [3:0] filter_reg_115;
wire   [0:0] exitcond4_fu_254_p2;
reg   [4:0] i_reg_126;
wire   [0:0] exitcond3_fu_266_p2;
reg   [9:0] phi_mul_reg_138;
reg   [4:0] j_reg_150;
wire    ap_CS_fsm_state24;
reg   [31:0] sum_reg_162;
reg   [2:0] row_offset_reg_174;
reg   [31:0] sum_1_reg_185;
reg   [2:0] col_offset_reg_197;
wire   [63:0] tmp_fu_235_p1;
wire   [63:0] tmp_13_fu_368_p1;
wire   [63:0] tmp_23_cast_fu_395_p1;
wire   [63:0] tmp_15_cast_fu_448_p1;
reg   [31:0] grp_fu_208_p0;
reg   [31:0] grp_fu_208_p1;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state8;
wire   [4:0] row_offset_cast4_fu_278_p1;
wire   [4:0] tmp_11_fu_300_p3;
wire   [9:0] tmp_7_cast_fu_312_p1;
wire   [9:0] tmp_7_fu_316_p2;
wire   [12:0] tmp_8_fu_322_p3;
wire   [13:0] tmp_14_cast_fu_330_p1;
wire   [4:0] col_offset_cast2_fu_339_p1;
wire   [4:0] tmp_2_fu_355_p2;
wire   [9:0] tmp_12_fu_361_p3;
wire   [5:0] tmp_8_cast_fu_373_p1;
wire   [5:0] tmp_14_fu_377_p2;
wire   [8:0] tmp_22_cast_fu_382_p3;
wire   [8:0] tmp_15_fu_390_p2;
wire   [31:0] a_assign_to_int_fu_400_p1;
wire   [7:0] tmp_6_fu_403_p4;
wire   [22:0] tmp_1_fu_413_p1;
wire   [0:0] notrhs_fu_423_p2;
wire   [0:0] notlhs_fu_417_p2;
wire   [0:0] tmp_4_fu_429_p2;
wire   [0:0] tmp_s_fu_218_p2;
wire   [0:0] tmp_3_fu_435_p2;
reg   [23:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 24'd1;
end

conv2d_fadd_32ns_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
conv2d_fadd_32ns_bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_208_p0),
    .din1(grp_fu_208_p1),
    .ce(1'b1),
    .dout(grp_fu_208_p2)
);

conv2d_fmul_32ns_cud #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
conv2d_fmul_32ns_cud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(image_load_reg_537),
    .din1(weight_load_reg_542),
    .ce(1'b1),
    .dout(grp_fu_214_p2)
);

conv2d_fcmp_32ns_dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
conv2d_fcmp_32ns_dEe_U3(
    .din0(a_assign_reg_562),
    .din1(32'd0),
    .opcode(5'd2),
    .dout(tmp_s_fu_218_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_282_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        col_offset_reg_197 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        col_offset_reg_197 <= col_offset_1_reg_522;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond4_fu_254_p2 == 1'd1))) begin
        filter_reg_115 <= filter_1_reg_455;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        filter_reg_115 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond3_fu_266_p2 == 1'd1))) begin
        i_reg_126 <= i_1_reg_483;
    end else if (((exitcond5_fu_223_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_reg_126 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond4_fu_254_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        j_reg_150 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state24)) begin
        j_reg_150 <= j_1_reg_491;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (exitcond3_fu_266_p2 == 1'd1))) begin
        phi_mul_reg_138 <= next_mul_reg_475;
    end else if (((exitcond5_fu_223_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        phi_mul_reg_138 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_266_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        row_offset_reg_174 <= 3'd0;
    end else if (((1'b1 == ap_CS_fsm_state6) & (exitcond1_fu_343_p2 == 1'd1))) begin
        row_offset_reg_174 <= row_offset_1_reg_499;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_282_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        sum_1_reg_185 <= sum_reg_162;
    end else if ((1'b1 == ap_CS_fsm_state16)) begin
        sum_1_reg_185 <= grp_fu_208_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_266_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        sum_reg_162 <= 32'd0;
    end else if (((1'b1 == ap_CS_fsm_state6) & (exitcond1_fu_343_p2 == 1'd1))) begin
        sum_reg_162 <= sum_1_reg_185;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        a_assign_1_reg_569 <= a_assign_1_fu_441_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state22)) begin
        a_assign_reg_562 <= grp_fu_208_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond5_fu_223_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        bias_addr_reg_470 <= tmp_fu_235_p1;
        tmp_cast1_reg_460[3 : 0] <= tmp_cast1_fu_240_p1[3 : 0];
        tmp_cast_reg_465[3 : 0] <= tmp_cast_fu_244_p1[3 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        bias_load_reg_557 <= bias_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        col_offset_1_reg_522 <= col_offset_1_fu_349_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        filter_1_reg_455 <= filter_1_fu_229_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_1_reg_483 <= i_1_fu_260_p2;
        next_mul_reg_475 <= next_mul_fu_248_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        image_load_reg_537 <= image_r_q0;
        weight_load_reg_542 <= weight_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        j_1_reg_491 <= j_1_fu_272_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        row_offset_1_reg_499 <= row_offset_1_fu_288_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond2_fu_282_p2 == 1'd1))) begin
        tmp_10_reg_514 <= tmp_10_fu_334_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_282_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        tmp_17_cast_reg_509[4 : 2] <= tmp_17_cast_fu_308_p1[4 : 2];
        tmp_9_reg_504 <= tmp_9_fu_294_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        tmp_5_reg_547 <= grp_fu_214_p2;
    end
end

always @ (*) begin
    if (((exitcond5_fu_223_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((exitcond5_fu_223_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        bias_ce0 = 1'b1;
    end else begin
        bias_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_208_p0 = sum_reg_162;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_fu_208_p0 = sum_1_reg_185;
    end else begin
        grp_fu_208_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_208_p1 = bias_load_reg_557;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_fu_208_p1 = tmp_5_reg_547;
    end else begin
        grp_fu_208_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        image_r_ce0 = 1'b1;
    end else begin
        image_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        weight_ce0 = 1'b1;
    end else begin
        weight_ce0 = 1'b0;
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
            if (((exitcond5_fu_223_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond4_fu_254_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond3_fu_266_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((exitcond2_fu_282_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'b1 == ap_CS_fsm_state6) & (exitcond1_fu_343_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
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
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
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
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_1_fu_441_p3 = ((tmp_3_fu_435_p2[0:0] === 1'b1) ? a_assign_reg_562 : 32'd0);

assign a_assign_to_int_fu_400_p1 = a_assign_reg_562;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign bias_address0 = bias_addr_reg_470;

assign col_offset_1_fu_349_p2 = (col_offset_reg_197 + 3'd1);

assign col_offset_cast2_fu_339_p1 = col_offset_reg_197;

assign exitcond1_fu_343_p2 = ((col_offset_reg_197 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond2_fu_282_p2 = ((row_offset_reg_174 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond3_fu_266_p2 = ((j_reg_150 == 5'd29) ? 1'b1 : 1'b0);

assign exitcond4_fu_254_p2 = ((i_reg_126 == 5'd29) ? 1'b1 : 1'b0);

assign exitcond5_fu_223_p2 = ((filter_reg_115 == 4'd8) ? 1'b1 : 1'b0);

assign filter_1_fu_229_p2 = (filter_reg_115 + 4'd1);

assign i_1_fu_260_p2 = (i_reg_126 + 5'd1);

assign image_r_address0 = tmp_13_fu_368_p1;

assign j_1_fu_272_p2 = (j_reg_150 + 5'd1);

assign next_mul_fu_248_p2 = (phi_mul_reg_138 + 10'd29);

assign notlhs_fu_417_p2 = ((tmp_6_fu_403_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notrhs_fu_423_p2 = ((tmp_1_fu_413_p1 == 23'd0) ? 1'b1 : 1'b0);

assign output_r_address0 = tmp_15_cast_fu_448_p1;

assign output_r_d0 = a_assign_1_reg_569;

assign row_offset_1_fu_288_p2 = (row_offset_reg_174 + 3'd1);

assign row_offset_cast4_fu_278_p1 = row_offset_reg_174;

assign tmp_10_fu_334_p2 = (tmp_cast_reg_465 + tmp_14_cast_fu_330_p1);

assign tmp_11_fu_300_p3 = {{row_offset_reg_174}, {2'd0}};

assign tmp_12_fu_361_p3 = {{tmp_9_reg_504}, {tmp_2_fu_355_p2}};

assign tmp_13_fu_368_p1 = tmp_12_fu_361_p3;

assign tmp_14_cast_fu_330_p1 = tmp_8_fu_322_p3;

assign tmp_14_fu_377_p2 = (tmp_17_cast_reg_509 + tmp_8_cast_fu_373_p1);

assign tmp_15_cast_fu_448_p1 = tmp_10_reg_514;

assign tmp_15_fu_390_p2 = (tmp_22_cast_fu_382_p3 + tmp_cast1_reg_460);

assign tmp_17_cast_fu_308_p1 = tmp_11_fu_300_p3;

assign tmp_1_fu_413_p1 = a_assign_to_int_fu_400_p1[22:0];

assign tmp_22_cast_fu_382_p3 = {{tmp_14_fu_377_p2}, {3'd0}};

assign tmp_23_cast_fu_395_p1 = tmp_15_fu_390_p2;

assign tmp_2_fu_355_p2 = (col_offset_cast2_fu_339_p1 + j_reg_150);

assign tmp_3_fu_435_p2 = (tmp_s_fu_218_p2 & tmp_4_fu_429_p2);

assign tmp_4_fu_429_p2 = (notrhs_fu_423_p2 | notlhs_fu_417_p2);

assign tmp_6_fu_403_p4 = {{a_assign_to_int_fu_400_p1[30:23]}};

assign tmp_7_cast_fu_312_p1 = j_reg_150;

assign tmp_7_fu_316_p2 = (tmp_7_cast_fu_312_p1 + phi_mul_reg_138);

assign tmp_8_cast_fu_373_p1 = col_offset_reg_197;

assign tmp_8_fu_322_p3 = {{tmp_7_fu_316_p2}, {3'd0}};

assign tmp_9_fu_294_p2 = (i_reg_126 + row_offset_cast4_fu_278_p1);

assign tmp_cast1_fu_240_p1 = filter_reg_115;

assign tmp_cast_fu_244_p1 = filter_reg_115;

assign tmp_fu_235_p1 = filter_reg_115;

assign weight_address0 = tmp_23_cast_fu_395_p1;

always @ (posedge ap_clk) begin
    tmp_cast1_reg_460[8:4] <= 5'b00000;
    tmp_cast_reg_465[13:4] <= 10'b0000000000;
    tmp_17_cast_reg_509[1:0] <= 2'b00;
    tmp_17_cast_reg_509[5] <= 1'b0;
end

endmodule //conv2d
