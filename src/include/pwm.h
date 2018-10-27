#ifndef _PWM_
#define _PWM_

#include <avr/io.h>
#include <stdlib.h>

/** 
  * @brief Specifies the prescalar based on frequency
  * @param freq Frequency value (Hz)
  *
  * @return Prescalar value
  */
float lookup_prescalar(float);

/** 
  * @brief Specifies OCR value based on frequency
  * @param freq Frequency value (Hz)
  *
  * @return OCR value
  */
int lookup_ocr(float);

/** 
  * @brief Specifies the CS control bits value based on frequency
  * @param freq Frequency value (Hz)
  *
  * @return CS control bits value
  */
uint8_t lookup_cs(float);

/** 
  * @brief Generates square waves pulse in a pin based on frequency
  * @param pin  Pin number
  * @param freq Frequency value (Hz)  
  */
void sqrwave(uint8_t , float);

/** 
  * @brief Generates PWM waves in a pin based on a duty cycle
  * @param pin  Pin number
  * @param dutycycle Duty cycle value (0 ~ 255)
  */
void pwmwave(uint8_t, uint8_t);

#endif
