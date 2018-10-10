#ifndef _INCL_PINS
#define _INCL_PINS

#include <avr/io.h>
#include <avr/portpins.h>
#include "macros.h"

#ifndef F_CPU
  #define F_CPU 16000000UL // or whatever may be your frequency
#endif

typedef struct{
  volatile uint8_t P;
  volatile uint8_t *_PORT;
  volatile uint8_t *_DDR;
  volatile uint8_t *_PIN;
}pin;

pin Pins[] = {
  {PD0, &PORTD, &DDRD, &PIND},   // rx
  {PD1, &PORTD, &DDRD, &PIND},   // tx

  {PD2, &PORTD, &DDRD, &PIND},   // dpin 2
  {PD3, &PORTD, &DDRD, &PIND},   // dpin 3
  {PD4, &PORTD, &DDRD, &PIND},   // dpin 4
  {PD5, &PORTD, &DDRD, &PIND},   // dpin 5
  {PD6, &PORTD, &DDRD, &PIND},   // dpin 6
  {PD7, &PORTD, &DDRD, &PIND},   // dpin 7

  {PB0, &PORTB, &DDRB, &PINB},   // dpin 8
  {PB1, &PORTB, &DDRB, &PINB},   // dpin 9
  {PB2, &PORTB, &DDRB, &PINB},   // dpin 10
  {PB3, &PORTB, &DDRB, &PINB},   // dpin 11
  {PB4, &PORTB, &DDRB, &PINB},   // dpin 12
  {PB5, &PORTB, &DDRB, &PINB}    // dpin 13
};


#define set_output(number) (set_bit(*(Pins[number]._DDR), Pins[number].P) )
#define set_pullup(number) (set_bit(*(Pins[number]._PORT), Pins[number].P) )

#define toggle_pullup(number) (swt_bit(*(Pins[number]._PORT), Pins[number].P) )

#define set_input(number) (clr_bit(*(Pins[number]._DDR), Pins[number].P) )
#define clr_pullup(number) (clr_bit(*(Pins[number]._PORT), Pins[number].P) )

int configure_input(number);

#endif