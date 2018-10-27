#ifndef __BUTTON__
#define __BUTTON__

#include "pins.h"

typedef enum button_mode {Btn_Up = 0,   ///< Fires action immediately after button get pressed
                          Btn_Down = 1  ///< Fires action when button is released
} Button_Mode;                          ///< Button mode options.

/** Standard Button Structure
 *
 * This file provides a simple Button Structure,
 * with a simple interface to basic operations
 * involving buttons.
 */
typedef struct{
  uint8_t pin_number;                   ///< Digital pin number associated to Button.
  Button_Mode mode;                     ///< Specifies if the button waits to be released to fire action.
  void (*fn)();                         ///< Registered function, to be called whether button is fired
}Button;

/** 
  * @brief Setups a new instance of a Button.
  * @param number Digital pin number associated to the Button.
  *
  * @return A pointer to Button structure. 
  */
Button * btn_setup(uint8_t pin_number);

/** 
  * @brief Registers a function to be called whether button is fired
  * @param b Button instance.
  * @param function Function pointer.
  */
void btn_register_fn(Button * b, void * function);

/** 
  * @brief Changes button behavior, waiting or not to be released to fire action.
  * @param b Button instance.
  * @param mode New button mode.
  */
void btn_set_mode(Button *b, Button_Mode mode);

/** 
  * @brief Verifies if a button is pressed at moment and fires it's action.
  * @param b Button instance.
  */
void btn_fired(Button *b);

/** 
  * @brief Verifies if a button is pressed at moment.
  * @param b Button instance.
  *
  * @return Returns 0 if button is not pressed, any value otherwise.
  */
uint8_t btn_pressed(Button *b);

#endif