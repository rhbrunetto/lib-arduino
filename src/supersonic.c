#include "supersonic.h"
#include "macros.h"
#include "pins.h"
#include <util/delay.h>

int supersonic(uint8_t trig, uint8_t echo) {
    int times = 0;
    set_bit(TCCR1B, CS01);
    set_output(trig);
    set_input(echo);
    digital_write(trig, HIGH);
    _delay_us(10);
    clr_bit(*(Pins[trig]._PORT), Pins[trig].P);
    while(!tst_bit(*(Pins[echo]._PIN), Pins[echo].P)) {
        ;
    }
    TCNT1 = 0;
    while(tst_bit(*(Pins[echo]._PIN), Pins[echo].P)){
        ;
    }
    return(TCNT1/116);
}
