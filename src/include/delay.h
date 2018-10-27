#ifndef _DELAY_
#define _DELAY_

    #include <avr/io.h>
    #include <stdlib.h>

    void delay_1us(void);
    void delay_1ms(void);
    void delay_us(uint32_t);
    void delay_ms(uint32_t);

#endif
