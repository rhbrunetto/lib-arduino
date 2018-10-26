#include "button.h"
#include <stdlib.h>

Button * btn_setup(uint8_t pin_number){
  Button * btn = (Button*)malloc(sizeof(Button));
  
  btn->pin_number = pin_number;
  set_input(pin_number);
  set_pullup(pin_number);

  btn->mode = Btn_Down;
  return btn;
}

void btn_register_fn(Button * b, void * function){
  // b->fnvector_size++;
  // b->fnvector[b->fnvector_size-1] = function;
  b->fn = function;
}

void btn_set_mode(Button *b, Button_Mode mode){
  b->mode = mode;
}

void btn_fired(Button *b){
  _delay_ms(20);
  if (test_input(b->pin_number)){
    if (b->mode == Btn_Up){
      b->fn();
      while(test_input(b->pin_number));
    }else{
      while (test_input(b->pin_number));
      b->fn();
    }
  };
}

uint8_t btn_pressed(Button *b){
  _delay_ms(20);
  return (test_input(b->pin_number));
}