EXEC=teste
# Compilation
CC=avr-gcc
CCOBJ=avr-objcopy
MODEL=atmega328p
# Execution
PORTA=/dev/ttyACM0
MODELO=m328p
PLACA=arduino
CPU=16000000UL

DEP=button.c led.c pins.c bcd.c

all: clean

compile:
	@$(CC) -Os -mmcu=$(MODEL) -DF_CPU=$(CPU) -c -o $(EXEC).o $(EXEC).c
	@$(CC) -C $(DEP) -Os -mmcu=$(MODEL) $(EXEC).o -o $(EXEC).elf
	@$(CCOBJ) -O ihex -R .eeprom $(EXEC).elf $(EXEC).hex
	@echo "Compilation success"

execute: compile
	@sudo avrdude -p $(MODELO) -c $(PLACA) -b 115200 -P $(PORTA) -U flash:w:$(EXEC).hex

clean: execute
	@rm $(EXEC).elf
	@rm $(EXEC).hex
	@rm $(EXEC).o

doc:
	@doxygen ../docs/config