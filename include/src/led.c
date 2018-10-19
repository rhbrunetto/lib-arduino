#include "led.h"

Led * led_setup(int number){
  Led * l = (Led*)malloc(sizeof(Led));
  l->pin_number = number;
  set_output(number);

  l->state = On;
  set_pullup(number);

  l->mode = Keep_on;
  return l;
}

int led_make_light(Led * led){
  led->state = On;
  set_pullup(led->pin_number);
  return 1;
}

int led_kill_light(Led * led){
  led->state = Off;
  clr_pullup(led->pin_number);
  return 1;
}

int led_switch_light(Led * led){
  if (led->state == Off){
    led_make_light(led);
  }else{
    led_kill_light(led);
  }
}

int led_change_mode(Led * led, Led_Mode mode){
  led->mode = mode;
  return 1;
}

int led_blink(Led * led, double time_ms){
  led_make_light(led);
  _delay_ms(20);
  led_kill_light(led);
  _delay_ms(20);
  return 1;
}

void led_free(Led * led){
  free(led);
}
