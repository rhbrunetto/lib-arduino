#include "button.h"
#include <stdlib.h>

Button * btn_setup(int pin_number){
  Button * btn = (Button*)malloc(sizeof(Button));
  
  btn->pin_number = pin_number;
  set_input(pin_number);
  set_pullup(pin_number);

  btn->mode = Btn_Up;
  return btn;
}

void btn_register_fn(Button * b, void * function){
  // b->fnvector_size++;
  // b->fnvector[b->fnvector_size-1] = function;
  b->fn = function;
}

int btn_fired(Button *b){
  _delay_ms(20);
  if (!test_input(b->pin_number)){
    b->fn();
    while(!test_input(b->pin_number));
  };
}

// void btn_listen(Button *btn){
//   while(1){
//     if(btn_pressed(btn)){
//       (*btn->fn)();
//     }
//   }
// }