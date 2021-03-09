#include "mbed.h"

//PwmOut led(LED1);
PwmOut scope(p21);

int main() {

    scope.period(0.001f);      // 1kHz 0.001s
    scope.write(0.50f);      // 50% duty cycle, relative to period
    //led.period(0.5f);      // 1kHz 0.001s
    //led.write(0.50f);      // 50% duty cycle, relative to period
    while(1);
}