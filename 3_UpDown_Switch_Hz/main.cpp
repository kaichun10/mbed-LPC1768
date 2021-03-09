#include "mbed.h"
PwmOut l1(LED1);
DigitalIn down(p12); //Joystick_Down_p12
DigitalIn up(p15); //Joystick_Up_p15
int main() {
    while(1) {
        
        l1.period(0.5f);      //0.5s
        l1.write(0.5f);   //50% duty cycle    
        while((down==0)&&(up==0));
        
        if(down==1){
            l1.period(0.1f);      //0.2s
            l1.write(0.5f);   //50% duty cycle 
            while(down==1); 
            }
        else if(up==1){
            l1.period(1.0f);      //1.0s
            l1.write(0.5f);   //50% duty cycle 
            while(up==1); 
            }

     
    } //end of while(1)
}
