#ifndef __BUTTON__
#define __BUTTON__

#include "pins.h"

typedef enum button_mode {Btn_Up = 0, Btn_Down = 1} Button_Mode;

typedef struct{
  uint8_t pin_number;
  Button_Mode mode;
  // uint8_t fnvector_size;
  // void (**fnvector)(void);
  // void (*fnvector[5])();
  void (*fn)();
}Button;


Button * btn_setup(uint8_t pin_number);

void btn_register_fn(Button * b, void * function);

void btn_set_mode(Button *b, Button_Mode mode);

void btn_fired(Button *b);

uint8_t btn_pressed(Button *b);

#endif