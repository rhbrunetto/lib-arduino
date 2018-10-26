#ifndef __BCD__
#define __BCD__

#include "pins.h"
#include <stdlib.h>

/** Standard 7-seg Display structure
 *
 * BCD implements a simple display that can be used by setting
 * up each digital pin where display is connected. This structure
 * contains the main functions while using a 7-seg display, 
 * providing a simple, but powerful, interface to be expanded.
 */


typedef struct {
  uint8_t a, b, c, d, e, f, g, dp;
  double delay;
  uint8_t loop;
}BCD;

/** 
  * @brief Setups a new instance of a display.
  * @param a is the digital pin where the display pin 'a' is plugged.
  * @param b is the digital pin where the display pin 'b' is plugged.
  * @param c is the digital pin where the display pin 'c' is plugged.
  * @param d is the digital pin where the display pin 'd' is plugged.
  * @param e is the digital pin where the display pin 'e' is plugged.
  * @param f is the digital pin where the display pin 'f' is plugged.
  * @param g is the digital pin where the display pin 'g' is plugged.
  * @param dp is the digital pin where the dot pin of display is plugged
  * @param delay is the delay between transactions, if multiple characters are going to be shown.
  *
  * @return a pointer to display structure. 
  */
BCD * bcd_setup(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t dp, double delay);

void bcd_show_char(BCD * display, char character);

void bcd_show_string(BCD * display, char * str);

void bcd_delay(BCD * display);

void bcd_clear(BCD * display);

void bcd_set_loop(BCD * display, uint8_t loop);

void bcd_free(BCD * display);

#endif