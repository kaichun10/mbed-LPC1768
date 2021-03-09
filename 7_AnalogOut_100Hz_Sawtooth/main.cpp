#include "mbed.h"   //sawtooth waveform 100Hz //with switch slope up or slope down
//#include "main.h"
#include "C12832.h"

DigitalOut l1(LED1);
DigitalOut l2(LED2);
DigitalOut l3(LED3);
DigitalIn  saw_in(p9); // this is a control line for rampup (left unconnected) or rampdown (on GND)
AnalogOut saw_out(p18); // DAC output
C12832 lcd(p5, p7, p6, p8, p11);
 
float   num; // temporary variable for math operations

int main() {
    //saw_in.mode(PullUp); // pullup mode for control line
    saw_in.mode(PullDown); // pulldown mode for control line
    
    while(1) {
      //100Hz t=1/f=1/100=0.01s
        //if (saw_in) {   //slope up
        if (saw_in) {    //slope down
        
            lcd.locate(0,3);
            lcd.printf("Sawtooth_going_up");
                
            l3=1;   // this is the part for ramp-up
            num = 0;
            for(int i=0; i<1000; i++) {
            //100Hz t=1/f=1/100=0.01s
            //0.01/1000=0.000 01s= 10us
                l1 = 1;
                num = num + 0.001;   // do not use the saw_out directly
                l1 = 0;
                saw_out = num;   // new value to DAC saw_out
                wait_us(10);
            }//for 
            l3=0;
        }//if
      
      
      ////////////////////////////////////////////////////////////////////////////////////////////////
        else {
            
            lcd.locate(0,3);
            lcd.printf("Sawtooth_going_down");
                
            l2=1;
            num = 1; // this is the part for ramp-down
            for(int j=0; j<1000; j++) {
                l1 = 1;
                num = num - 0.001;
                l1 = 0;
                saw_out = num;
                wait_us(10);
            }//for
        l2=0;
      }//else
      
   }//while
}//main