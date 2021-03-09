/* Program to use analogue input on pin 20 to control LED brightness via
analogue output on pin 18
*/
#include "mbed.h"
AnalogOut Aout(p18); //defines analog output on pin 18
AnalogIn Ain(p20); //define analog input on pin 20
DigitalOut l1(LED1);
DigitalOut l2(LED2);
DigitalOut l3(LED3);
DigitalOut l4(LED4);

int main() {
    
    while(1) {
    
        Aout=Ain;
        if(Ain < 0.182){
            l1=0;
            l2=0;
            l3=0;
            l4=0;
        }
        else if((Ain > 0.182)&&(Ain < 0.364)){
            l1=1;
            l2=0;
            l3=0;
            l4=0;
        }
        else if((Ain > 0.364)&&(Ain < 0.545)){
            l1=1;
            l2=1;
            l3=0;
            l4=0;
        }
        else if((Ain > 0.545)&&(Ain < 0.727)){
            l1=1;
            l2=1;
            l3=1;
            l4=0;
        }
        else if(Ain > 0.727){
            l1=1;
            l2=1;
            l3=1;
            l4=1;
        }
  
    }//while
}//main