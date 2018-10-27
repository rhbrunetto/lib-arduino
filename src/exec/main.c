#include "delay.h"
#include "pins.h"

int main() {
    
    set_output(8);
    while(1) {
        delay_ms(500); 
        digital_write(8, HIGH);
        delay_ms(500); 
        digital_write(8, LOW);
    }
    return 0;
}
