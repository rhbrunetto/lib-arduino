#ifndef __LED__
#define __LED__

#include "pins.h"
#include "delay.h"

typedef enum led_state {On = 1,     ///< Led's light is on
                        Off = 0     ///< Led's light is off
} Led_State;                        ///< Maps a possible Led state.

/** Standard Led Structure
 *
 * This file provides a simple Led Structure,
 * with a simple interface to basic operations.
 */

typedef struct{
  int pin_number;                   ///< Digital pin number associated to Led.
  Led_State state;                  ///< Represents a Led State, used to control on/off functions.
}Led;

/** 
  * @brief Setups a new instance of a Led.
  * @param number Digital pin number associated to the Led.
  *
  * @return A pointer to Led structure. 
  */
Led * led_setup(int number);

/** 
  * @brief Turns on the instance Led's light.
  * @param led Led instance.
  */
void led_make_light(Led * led);

/** 
  * @brief Turns off the instance Led's light.
  * @param led Led instance.
  */
void led_kill_light(Led * led);

/** 
  * @brief Toggles the instance Led's light.
  * @param led Led instance.
  */
void led_switch_light(Led * led);

/** 
  * @brief Blinks the instance Led's light, keeping it on and off for a specified time.
  * @param led Led instance.
  * @param time_ms Time interval to keep Led's light on and off.
  */
void led_blink(Led * led, uint32_t time_ms);

/** 
  * @brief Destroys a Led instance.
  * @param led Led instance.
  */
void led_free(Led * led);

#endif