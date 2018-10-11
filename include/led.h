#ifndef __LED__
#define __LED__

#include "pins.h"

enum State {On = 1, Off = 0}; 
enum Mode {Blink = 0, Keep_off = 1, Keep_on = 2}; 

typedef struct{
  int pin_number;
  State state;
  Mode mode;
}Led;

Led * led_setup(int number);

int led_make_light(Led * led);

int led_kill_light(Led * led);

int led_change_mode(Led * led);

int led_blink(Led * led);

#endif