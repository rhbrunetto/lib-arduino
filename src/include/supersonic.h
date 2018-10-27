#ifndef _SONIC_
#define _SONIC_

#include <avr/io.h>
#include <stdlib.h>

/** 
  * @brief Measures a distance based on a sonar.
  * @param trig Digital pin number associated to the Trigger pin.
  * @param echo Digital pin number associated to the Echo pin.
  *
  * @return Measured distance (cm) between obstacle.
  */
int supersonic(uint8_t, uint8_t);

#endif
