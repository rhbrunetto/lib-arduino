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

#define HIGH 1
#define LOW 0

typedef struct{
  volatile uint8_t P;
  volatile uint8_t *_PORT;
  volatile uint8_t *_DDR;
  volatile uint8_t *_PIN;
  volatile uint8_t *_TCCA;
  volatile uint8_t *_TCCB;
  volatile uint8_t *_OCRA;
  volatile uint8_t *_OCRB;
}pin;

typedef struct{
    volatile uint8_t WGM0;
    volatile uint8_t WGM1;
    volatile uint8_t WGM2;
    volatile uint8_t COM0;
    volatile uint8_t COM1;
    volatile uint8_t CS0;
    volatile uint8_t CS1;
    volatile uint8_t CS2;
} bytes;

extern pin Pins[14];
extern bytes Bytes[14];

uint8_t set_output(uint8_t number);
uint8_t set_pullup(uint8_t number);
uint8_t toggle_pullup(uint8_t number);
uint8_t test_input(uint8_t number);
uint8_t set_input(uint8_t number);
uint8_t clr_pullup(uint8_t number);
uint8_t configure_input(uint8_t number);

uint8_t digital_write(uint8_t number, int value);

#endif
