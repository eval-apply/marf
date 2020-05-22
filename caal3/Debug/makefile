################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include Libraries/STM32F4xx_StdPeriph_Driver/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
MARF_v2.5.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
MARF_v2.5.list \

OBJCOPY_HEX += \
MARF_v2.5.hex \

OBJCOPY_BIN += \
MARF_v2.5.bin \


# All Target
all: MARF_v2.5.elf secondary-outputs

# Tool invocations
MARF_v2.5.elf: $(OBJS) $(USER_OBJS) ../stm32f4_flash.ld
	arm-none-eabi-gcc -o "MARF_v2.5.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"../stm32f4_flash.ld" --specs=nosys.specs -Wl,-Map="MARF_v2.5.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

MARF_v2.5.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "MARF_v2.5.list"
	@echo 'Finished building: $@'
	@echo ' '

MARF_v2.5.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "MARF_v2.5.hex"
	@echo 'Finished building: $@'
	@echo ' '

MARF_v2.5.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "MARF_v2.5.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
