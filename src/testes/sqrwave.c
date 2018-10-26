#include "../pwm.h"

#define led PD6
int main() {
    
    sqrwave(led, 7000.0);
}
