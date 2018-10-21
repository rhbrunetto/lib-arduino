#ifndef __BCD__
#define __BCD__

#include "pins.h"
#include <stdlib.h>


typedef struct {
  uint8_t a, b, c, d, e, f, g, dp;
  double delay;
  uint8_t loop;
}BCD;

BCD * bcd_setup(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t dp, double delay);

void bcd_show_char(BCD * display, char character);

void bcd_show_string(BCD * display, char * str);

void bcd_delay(BCD * display);

void bcd_clear(BCD * display);

void bcd_set_loop(BCD * display, uint8_t loop);

void bcd_free(BCD * display);

#endif