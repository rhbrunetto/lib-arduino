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

int set_output(int number);
int set_pullup(int number);
int toggle_pullup(int number);
int test_input(int number);
int set_input(int number);
int clr_pullup(int number);
int configure_input(int number);

#endif