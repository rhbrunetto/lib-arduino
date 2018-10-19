#include "led.h"
#include "button.h"
#include "macros.h"
#include <stdio.h>
#include <util/delay.h>

Led * led, * led2;



void execute(){
  led_switch_light(led2);
}

void execute2(){
  led_switch_light(led);
}
  
int main(){
  led = led_setup(9);
  led2 = led_setup(10);
  Button * btn = btn_setup(8);
  btn_register_fn(btn, execute);

  led_kill_light(led2);
  led_kill_light(led);
  
  while(1){
    btn_fired(btn);
  }

}