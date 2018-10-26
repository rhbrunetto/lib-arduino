#include "pins.h"

pin Pins[] = {
  {PD0, &PORTD, &DDRD, &PIND, NULL, NULL, NULL, NULL},   // rx
  {PD1, &PORTD, &DDRD, &PIND, NULL, NULL, NULL, NULL},   // tx

  {PD2, &PORTD, &DDRD, &PIND, NULL, NULL, NULL, NULL},   // dpin 2
  {PD3, &PORTD, &DDRD, &PIND, &TCCR2A, &TCCR2B, &OCR2A, &OCR2B},   // dpin 3
  {PD4, &PORTD, &DDRD, &PIND, NULL, NULL, NULL, NULL},   // dpin 4
  {PD5, &PORTD, &DDRD, &PIND, &TCCR0A, &TCCR0B, &OCR0A, &OCR0B},   // dpin 5
  {PD6, &PORTD, &DDRD, &PIND, &TCCR0A, &TCCR0B, &OCR0A, NULL},   // dpin 6
  {PD7, &PORTD, &DDRD, &PIND, NULL, NULL, NULL, NULL},   // dpin 7
  {PB0, &PORTB, &DDRB, &PINB, NULL, NULL, NULL, NULL},   // dpin 8
  {PB1, &PORTB, &DDRB, &PINB, &TCCR1A, &TCCR1B, (uint8_t*)&OCR1A, NULL },   // dpin 9
  {PB2, &PORTB, &DDRB, &PINB, &TCCR1A, &TCCR1B, (uint8_t*)&OCR1A, (uint8_t*)&OCR1B},   // dpin 10
  {PB3, &PORTB, &DDRB, &PINB, &TCCR2A, &TCCR2B, &OCR2A, NULL},   // dpin 11
  {PB4, &PORTB, &DDRB, &PINB, NULL, NULL, NULL, NULL},   // dpin 12
  {PB5, &PORTB, &DDRB, &PINB, NULL, NULL, NULL, NULL}    // dpin 13
};

bytes Bytes[]= {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {WGM00, WGM01, WGM02, COM0B0, COM0B1, CS00, CS01, CS02},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {WGM00, WGM01, WGM02, COM0B0, COM0B1, CS00, CS01, CS02},
    {WGM00, WGM01, WGM02, COM0A0, COM0A1, CS00, CS01, CS02},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {WGM00, WGM01, WGM02, COM0A0, COM0A1, CS00, CS01, CS02},
    {WGM00, WGM01, WGM02, COM0B0, COM0B1, CS00, CS01, CS02},
    {WGM00, WGM01, WGM02, COM0A0, COM0A1, CS00, CS01, CS02},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}

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

uint8_t digital_write(uint8_t number, int value) {
  if (value) {
    return set_bit(*(Pins[number]._PORT), Pins[number].P);
  }
  return clr_bit(*(Pins[number]._PORT), Pins[number].P);
}
