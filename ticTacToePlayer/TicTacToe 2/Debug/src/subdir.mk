################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Board.cpp \
../src/ComputerPlayer.cpp \
../src/Player.cpp \
../src/TerminalPlayer.cpp \
../src/TicTacToe.cpp 

OBJS += \
./src/Board.o \
./src/ComputerPlayer.o \
./src/Player.o \
./src/TerminalPlayer.o \
./src/TicTacToe.o 

CPP_DEPS += \
./src/Board.d \
./src/ComputerPlayer.d \
./src/Player.d \
./src/TerminalPlayer.d \
./src/TicTacToe.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


