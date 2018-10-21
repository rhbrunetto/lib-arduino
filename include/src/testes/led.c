#include "..led.h"
  
int main(){
  Led * led = led_setup(8);

  led_kill_light(led);
  
  while(1){
    led_blink(led, 1000);
  }
}