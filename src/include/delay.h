#ifndef _DELAY_
#define _DELAY_

#include <avr/io.h>
#include <stdlib.h>

/** 
  * @brief Delays for, approximately, 1 microssecond 
  */
void delay_1us(void);

/** 
  * @brief Delays for, approximately, 1 millissecond
  */
void delay_1ms(void);

/** 
  * @brief Delays for, approximately, a specified time, in microsseconds
  * @param time Time for delay (in microsseconds)
  */
void delay_us(uint32_t);

/** 
  * @brief Delays for, approximately, a specified time, in milliseconds
  * @param time Time for delay (in milliseconds)
  */
void delay_ms(uint32_t);

#endif
