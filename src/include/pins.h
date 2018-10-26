#ifndef _INCL_PINS
#define _INCL_PINS

#ifndef F_CPU
  #define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>
#include <avr/portpins.h>
#include <util/delay.h>
#include "macros.h"

#include <stdlib.h>

typedef struct{
  volatile uint8_t P;
  volatile uint8_t *_PORT;
  volatile uint8_t *_DDR;
  volatile uint8_t *_PIN;
}pin;

uint8_t set_output(uint8_t number);
uint8_t set_pullup(uint8_t number);
uint8_t toggle_pullup(uint8_t number);
uint8_t test_input(uint8_t number);
uint8_t set_input(uint8_t number);
uint8_t clr_pullup(uint8_t number);
uint8_t configure_input(uint8_t number);

#endif