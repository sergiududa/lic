################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../solution1/.tcls/conv_test.cpp 

OBJS += \
./testbench/conv_test.o 

CPP_DEPS += \
./testbench/conv_test.d 


# Each subdirectory must supply rules for building sources it contributes
testbench/conv_test.o: /home/sergiu/git/lic/hls/workspace/conv/solution1/.tcls/conv_test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -I/opt/Xilinx/Vivado/2017.4/include -I/home/sergiu/git/lic/hls/workspace -I/opt/Xilinx/Vivado/2017.4/include/ap_sysc -I/opt/Xilinx/Vivado/2017.4/lnx64/tools/systemc/include -I/opt/Xilinx/Vivado/2017.4/lnx64/tools/auto_cc/include -I/opt/Xilinx/Vivado/2017.4/include/etc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


