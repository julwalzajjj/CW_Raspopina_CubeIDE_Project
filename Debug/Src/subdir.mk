################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/encoder1.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/tilt_sensor.c \
../Src/tim.c \
../Src/transfer.c \
../Src/usart.c 

C_DEPS += \
./Src/encoder1.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/tilt_sensor.d \
./Src/tim.d \
./Src/transfer.d \
./Src/usart.d 

OBJS += \
./Src/encoder1.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/tilt_sensor.o \
./Src/tim.o \
./Src/transfer.o \
./Src/usart.o 


# Each subdirectory must supply rules for building sources it contributes
Src/encoder1.o: ../Src/encoder1.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/encoder1.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/main.o: ../Src/main.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/main.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/syscalls.o: ../Src/syscalls.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/sysmem.o: ../Src/sysmem.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/tilt_sensor.o: ../Src/tilt_sensor.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/tilt_sensor.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/tim.o: ../Src/tim.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/tim.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/transfer.o: ../Src/transfer.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/transfer.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/usart.o: ../Src/usart.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F0 -DSTM32F051R8Tx -c -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/Inc" -I"C:/Users/user/STM32CubeIDE/workspace_1.6.0/course_work_raspopina/CMSIS/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/usart.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

