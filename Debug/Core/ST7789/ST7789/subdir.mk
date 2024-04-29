################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/ST7789/ST7789/fonts.c \
../Core/ST7789/ST7789/st7789.c 

OBJS += \
./Core/ST7789/ST7789/fonts.o \
./Core/ST7789/ST7789/st7789.o 

C_DEPS += \
./Core/ST7789/ST7789/fonts.d \
./Core/ST7789/ST7789/st7789.d 


# Each subdirectory must supply rules for building sources it contributes
Core/ST7789/ST7789/fonts.o: ../Core/ST7789/ST7789/fonts.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aluno/STM32CubeIDE/workspace_1.5.1/PROJETO_INTEGRADO_2/Core/ST7789" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/ST7789/ST7789/fonts.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Core/ST7789/ST7789/st7789.o: ../Core/ST7789/ST7789/st7789.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aluno/STM32CubeIDE/workspace_1.5.1/PROJETO_INTEGRADO_2/Core/ST7789" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/ST7789/ST7789/st7789.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

