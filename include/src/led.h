#ifndef __LED__
#define __LED__

#include "pins.h"

typedef enum led_state {On = 1, Off = 0} Led_State;

typedef struct{
  int pin_number;
  Led_State state;
}Led;

Led * led_setup(int number);

int led_make_light(Led * led);

int led_kill_light(Led * led);

int led_switch_light(Led * led);

int led_blink(Led * led, double time_ms);

void led_free(Led * led);

#endif