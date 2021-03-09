
#include "mbed.h"
AnalogOut Aout(p18); //create an analogue output on pin 18

int main() {
    while (1) {
        
        /*
        //Example_Code
        //1.089V
        Aout=0.33;
        wait(2);    //0.33*3.3=1.089
        //2.178V
        Aout=0.66;  //0.66*3.3=2.178
        wait(2);
       */  
             
       //0.5V 
        Aout=0.152;  //0.5/3.3=0.152

    }
}

/*
        //1.0 V
        Aout=0.303;  //1.0/3.3=0.303

        //2.0V
        Aout=0.606;  //2/3.3=0.606

        //2.5V    
        Aout=0.758;  //2.5/3.3=0.758
*/