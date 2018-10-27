#ifndef _INCL_PINS
#define _INCL_PINS

#ifndef F_CPU
  #define F_CPU 16000000UL // or whatever may be your frequency
#endif

#include <avr/io.h>
#include <avr/portpins.h>
#include <util/delay.h>
#include "macros.h"

#include <stdlib.h>

#define HIGH 1
#define LOW 0

/** Standard Pin Structure
 *
 * This file provides a simple Pin Structure,
 * which contains sufficient data to allow the
 * basic operations that involves I/O.
 */
 
typedef struct{
  volatile uint8_t P;           ///< Pin number associated by ATMega328p
  volatile uint8_t *_PORT;      ///< Points to a PORT register (pullup)
  volatile uint8_t *_DDR;       ///< Points to a DDR register (data direction)
  volatile uint8_t *_PIN;       ///< Points to a PIN register (input signal)
  volatile uint8_t *_TCCA;      ///< Points to the TCCA register (PWM)
  volatile uint8_t *_TCCB;      ///< Points to the TCCB register (PWM)
  volatile uint8_t *_OCRA;      ///< Points to the OCRA register (PWM)
  volatile uint8_t *_OCRB;      ///< Points to the OCRB register (PWM)
}Pin;

typedef struct{
    volatile uint8_t WGM0;
    volatile uint8_t WGM1;
    volatile uint8_t WGM2;
    volatile uint8_t COM0;
    volatile uint8_t COM1;
    volatile uint8_t CS0;
    volatile uint8_t CS1;
    volatile uint8_t CS2;
} bytes;

extern Pin Pins[14];      ///< Digital pin instances, common to all files
extern bytes Bytes[14];   ///< Bytes instances

/** 
  * @brief Sets a pin as a output, using its DDR.
  * @param number Digital pin number.
  */
uint8_t set_output(uint8_t number);

/** 
  * @brief Sets a pin as active, using its PORT.
  * @param number Digital pin number.
  */
uint8_t set_pullup(uint8_t number);

/** 
  * @brief Toggles a pin activity, using its PORT.
  * @param number Digital pin number.
  */
uint8_t toggle_pullup(uint8_t number);

/** 
  * @brief Tests if there is an input signal on a pin, using its PIN.
  * @param number Digital pin number.
  */
uint8_t test_input(uint8_t number);

/** 
  * @brief Sets a pin as an input, using its DDR.
  * @param number Digital pin number.
  */
uint8_t set_input(uint8_t number);

/** 
  * @brief Sets a pin as inactive, using its PORT.
  * @param number Digital pin number.
  */
uint8_t clr_pullup(uint8_t number);

/** 
  * @brief Writes an integer value to a pin, using its PORT.
  * @param number Digital pin number.
  */
uint8_t digital_write(uint8_t number, int value);

#endif
