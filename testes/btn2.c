#include "..led.h"
#include "..button.h"
  
Led * led;

void execute(){
  led_switch_light(led);
}

int main(){
  // LED Initialization
  led = led_setup(8);
  led_kill_light(led);

  // Button Initialization
  Button * btn = btn_setup(9);
  btn_register_fn(btn, execute);

  // Fires function without release button
  btn_set_mode(btn, Btn_Up);
  
  while(1){
    btn_fired(btn);
  }
}