#ifndef __BUTTON__
#define __BUTTON__

#include "pins.h"

typedef enum button_mode {Btn_Up = 0, Btn_Down = 1} Button_Mode;

typedef struct{
  int pin_number;
  Button_Mode mode;
  // int fnvector_size;
  // void (**fnvector)(void);
  // void (*fnvector[5])();
  void (*fn)();
}Button;


Button * btn_setup(int pin_number);

void btn_register_fn(Button * b, void * function);

int btn_fired(Button *b);

#endif