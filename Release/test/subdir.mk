################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/JobShop_test.cpp \
../test/Job_test.cpp \
../test/Task_test.cpp 

OBJS += \
./test/JobShop_test.o \
./test/Job_test.o \
./test/Task_test.o 

CPP_DEPS += \
./test/JobShop_test.d \
./test/Job_test.d \
./test/Task_test.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


