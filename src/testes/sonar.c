#include "supersonic.h"
#include "uart.h"
#include <stdio.h>
#include <util/delay.h>

int main() {
    uart_init();
    while(1)
        printf("%d\n", supersonic(8, 9));
        _delay_ms(500);

}

