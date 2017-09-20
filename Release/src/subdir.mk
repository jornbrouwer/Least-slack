################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Job.cpp \
../src/JobShop.cpp \
../src/Task.cpp \
../src/main.cpp 

OBJS += \
./src/Job.o \
./src/JobShop.o \
./src/Task.o \
./src/main.o 

CPP_DEPS += \
./src/Job.d \
./src/JobShop.d \
./src/Task.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


