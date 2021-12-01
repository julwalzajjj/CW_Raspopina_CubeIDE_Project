################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CMSIS/Src/system_stm32f0xx.c 

C_DEPS += \
./CMSIS/Src/system_stm32f0xx.d 

OBJS += \
./CMSIS/Src/system_stm32f0xx.o 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/Src/system_stm32f0xx.o: ../CMSIS/Src/system_stm32f0xx.c CMSIS/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"CMSIS/Src/system_stm32f0xx.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

