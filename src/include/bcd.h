#ifndef __BCD__
#define __BCD__

#include "pins.h"
#include <stdlib.h>
#include "delay.h"

/** Standard 7-seg Display structure
 *
 * BCD implements a simple display that can be used by setting
 * up each digital pin where display is connected. This structure
 * contains the main functions while using a 7-seg display, 
 * providing a simple, but powerful, interface to be expanded.
 */


typedef struct {
  uint8_t a;        ///< Represents the display pin 'a'.
  uint8_t b;        ///< Represents the display pin 'b'.
  uint8_t c;        ///< Represents the display pin 'c'.
  uint8_t d;        ///< Represents the display pin 'd'.
  uint8_t e;        ///< Represents the display pin 'e'.
  uint8_t f;        ///< Represents the display pin 'f'.
  uint8_t g;        ///< Represents the display pin 'g'.
  uint8_t dp;       ///< Represents the display pin 'dot'.
  uint32_t delay;   ///< Represents a delay between character transition.
  uint8_t loop;     ///< Stores the current display mode: 0 for unique exhibition, or any other value for cyclic exhibition.
}BCD;

/** 
  * @brief Setups a new instance of a display.
  * @param a Digital pin where the display pin 'a' is plugged.
  * @param b Digital pin where the display pin 'b' is plugged.
  * @param c Digital pin where the display pin 'c' is plugged.
  * @param d Digital pin where the display pin 'd' is plugged.
  * @param e Digital pin where the display pin 'e' is plugged.
  * @param f Digital pin where the display pin 'f' is plugged.
  * @param g Digital pin where the display pin 'g' is plugged.
  * @param dp Digital pin where the dot pin of display is plugged.
  * @param delay Delay between transactions, if multiple characters are going to be shown.
  *
  * @return A pointer to display structure. 
  */
BCD * bcd_setup(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t dp, uint32_t delay);

/** 
  * @brief Displays an ASCII character in a display.
  * @param display Display instance.
  * @param character Character to be shown.
  */
void bcd_show_char(BCD * display, char character);

/** 
  * @brief Displays a string in a display, a character at a time, interleaved by a delay.
  * @param display Display instance.
  * @param str String to be shown.
  */
void bcd_show_string(BCD * display, char * str);

/** 
  * @brief Freezes a display for a presetted delay.
  * @param display Display instance.
  */
void bcd_delay(BCD * display);

/** 
  * @brief Clears a display.
  * @param display Display instance.
  */
void bcd_clear(BCD * display);

/** 
  * @brief Sets a loop mode for a display.
  * @param display Display instance.
  * @param loop Defines a unique exhibition (0) or a cyclic exhibition (any other value).
  */
void bcd_set_loop(BCD * display, uint8_t loop);

/** 
  * @brief Destroys a display instance.
  * @param display Display instance.
  */
void bcd_free(BCD * display);

#endif