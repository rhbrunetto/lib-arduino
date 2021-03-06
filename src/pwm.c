#include "pwm.h"
#include "pins.h"

float lookup_prescalar(float freq) {

    if ((31250.0 < freq) && (freq <= 8000000.0)) {
        return 1.0;
    }
    else if (freq > 7812.5) {
        return 256.0;
    }
    else if (freq > 30.51) {
        return 1024.0;
    }
    else {
        return 0.0;
    }
}

uint8_t lookup_cs(float freq) {

    if ((31250.0 < freq ) && (freq <= 8000000.0)) {
        return (uint8_t)1;
    }
    else if (freq > 7812.5) {
        return (uint8_t)4;
    }
    else if (freq > 30.51) {
        return (uint8_t)5;
    }
    else {
        return 0.0;
    }
}

uint8_t lookup_cs2(float freq) {

    if ((31250.0 < freq ) && (freq <= 8000000.0)) {
        return (uint8_t)1;
    }
    else if (freq > 7812.5) {
        return (uint8_t)6;
    }
    else if (freq > 30.51) {
        return (uint8_t)7;
    }
    else {
        return 0.0;
    }
}

int lookup_ocr(float freq) {
    return ((int)(16000000.0 / ( 2.0 * lookup_prescalar(freq) * freq) - 1.0));
}

void sqrwave(uint8_t pin, float freq) {
    set_output(pin);
    if ((Pins[pin]._TCCA) == NULL) {
        digital_write(pin, HIGH);
    }
    else {
        uint8_t cs = lookup_cs(freq);
        if (!cs) {
            return;
        }
        
        switch (pin) {
            case 3:
            case 11:
                *(Pins[pin]._OCRA) = lookup_ocr(freq); 
                set_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM1);
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM0);
                set_bit(*(Pins[pin]._TCCA), Bytes[pin].COM0); 
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].COM1);
                *(Pins[pin]._TCCB) = lookup_cs2(freq);
                break;
            
            case 5 :
            case 6 :
                *(Pins[pin]._OCRA) = lookup_ocr(freq);
                set_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM1);
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM0);
                set_bit(*(Pins[pin]._TCCA), Bytes[pin].COM0); 
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].COM1);
                *(Pins[pin]._TCCB) = cs;
                break;
            
            case 9 :
            case 10 :
                *(Pins[pin]._OCRA) = lookup_ocr(freq);
                *(Pins[pin]._TCCB) = cs;
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM1);
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM0);
                set_bit(*(Pins[pin]._TCCB), Bytes[pin].WGM2);
                set_bit(*(Pins[pin]._TCCA), Bytes[pin].COM0); 
                clr_bit(*(Pins[pin]._TCCA), Bytes[pin].COM1);
                break;
            
        }
    }
}

void pwmwave(uint8_t pin, uint8_t dutycycle) {
    set_output(pin);
    if ((Pins[pin]._TCCA) == NULL) {
        uint8_t pwmpin = dutycycle > 128? digital_write(Pins[pin].P, HIGH) : digital_write(Pins[pin].P, LOW);
    }
    
    switch (pin) {
        case 3:
        case 11:
        case 5:
        case 6:

            set_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM0);
            set_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM1);
            clr_bit(*(Pins[pin]._TCCA), Bytes[pin].COM0);
            set_bit(*(Pins[pin]._TCCA), Bytes[pin].COM1);
            break;
        
        case 9 :
        case 10 :
            set_bit(*(Pins[pin]._TCCB), Bytes[pin].WGM2);
            clr_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM1);
            set_bit(*(Pins[pin]._TCCA), Bytes[pin].WGM0);
            clr_bit(*(Pins[pin]._TCCA), Bytes[pin].COM0);
            set_bit(*(Pins[pin]._TCCA), Bytes[pin].COM1);
            break;
        
    }
    *(Pins[pin]._TCCB) = 2;
    if (Pins[pin]._OCRB != NULL) {
        *(Pins[pin]._OCRB) = dutycycle;
    }
    else {
        *(Pins[pin]._OCRA) = dutycycle;
    }
}
