/*Program to flash one of two LEDS, depending on the state of a 2 way
switch
*/
#include "mbed.h"
DigitalOut l1(LED1);
DigitalOut l2(LED2);
DigitalIn down(p12);
int main() {
    while(1) {
        
        if(down==1) { //test value of switch input
//execute following block of code if switch input is 1
            l2 = 0; //green LED is off
            l1 = 1; //flash red LED
            wait(0.05);
            l1 = 0;
            wait(0.05);
        } //end of if
        else {
//execute this block of code if switchinput is 0
            l1 = 0; //l1 is off
            l2 = 1; //flash green LED
            wait(0.05);
            l2 = 0;
            wait(0.05);
        } //end of else
        
    } //end of while(1)
return 0;
} //end of main