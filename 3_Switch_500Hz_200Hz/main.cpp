#include "mbed.h"
PwmOut scope(p21);
DigitalIn down(p12); //Joystick_Down_p12
int main() {
    while(1) {
        
        scope.period(0.005f);      //f=200Hz_0.005s
        scope.write(0.5f);   //50% duty cycle    
        while(down==0);
        
        scope.period(0.002f);      //f=500Hz_0.002s
        scope.write(0.5f);   //50% duty cycle 
        while(down==1); 
     
    } //end of while(1)
}