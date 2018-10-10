#include "pins.h"
#include <stdio.h>
#include <util/delay.h>

int main(){

  set_output(8);
  set_pullup(8);

  while(1){
    toggle_pullup(8);
    _delay_ms(200);
  }

}