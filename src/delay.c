#include "delay.h"

    void delay_1us() {
        __asm__(
            
                "ldi  r18, 4 \n"
                "L1: dec  r18i \n"
                "brne L1 \n"
                "nop \n"
                ); 
    }

    void delay_1ms() {
        __asm__ (
                "ldi  r18, 21 \n" 
                "ldi  r19, 198 \n"
                "L2: dec  r19 \n"
                "brne L2 \n"
                "dec  r18 \n"
                "brne L2 \n"
                ); 
    }

    void delay_us(uint32_t time) {
        uint32_t i;
        for (i = 0; i < time; i++) {
            delay_1us();
        }
    }

    void delay_ms(uint32_t time) {
        uint32_t i;
        for (i = 0; i < time; i++) {
            delay_1ms();
        }
    }
