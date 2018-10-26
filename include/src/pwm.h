#ifndef _PWM_
#define _PWM_
    #include <avr/io.h>
    #include <stdlib.h>
    
    float lookup_prescalar(float);
    int lookup_ocr(float);
    uint8_t lookup_cs(float);
    void sqrwave(uint8_t , float);
    void pwmwave(uint8_t, uint8_t);
#endif
