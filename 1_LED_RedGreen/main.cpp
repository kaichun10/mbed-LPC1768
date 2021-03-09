#include "mbed.h"

DigitalOut red_led(p5);     //Red_LED
DigitalOut green_led(p6);   //Green_LED
//DigitalOut red_led(LED1);   //LED1
//DigitalOut green_led(LED2); //LED2

int main() {
    
    red_led=1;
    green_led=0;
    while(1) {
        red_led=!red_led;
        green_led=!green_led;
        wait(1);
    }
    

}
