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

int set_output(int number){
  return set_bit(*(Pins[number]._DDR), Pins[number].P);
}

int set_pullup(int number){
  return set_bit(*(Pins[number]._PORT), Pins[number].P);
}

int toggle_pullup(int number){
  return swt_bit(*(Pins[number]._PORT), Pins[number].P);
}

int test_input(int number){
  return !tst_bit(*(Pins[number]._PIN), Pins[number].P);
}

int set_input(int number){
  return clr_bit(*(Pins[number]._DDR), Pins[number].P);
}

int clr_pullup(int number){
  return clr_bit(*(Pins[number]._PORT), Pins[number].P);
}