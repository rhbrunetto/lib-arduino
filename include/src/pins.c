#include "pins.h"

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

uint8_t set_output(uint8_t number){
  return set_bit(*(Pins[number]._DDR), Pins[number].P);
}

uint8_t set_pullup(uint8_t number){
  return set_bit(*(Pins[number]._PORT), Pins[number].P);
}

uint8_t toggle_pullup(uint8_t number){
  return swt_bit(*(Pins[number]._PORT), Pins[number].P);
}

uint8_t test_input(uint8_t number){
  return !tst_bit(*(Pins[number]._PIN), Pins[number].P);
}

uint8_t set_input(uint8_t number){
  return clr_bit(*(Pins[number]._DDR), Pins[number].P);
}

uint8_t clr_pullup(uint8_t number){
  return clr_bit(*(Pins[number]._PORT), Pins[number].P);
}