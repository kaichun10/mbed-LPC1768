
#include "mbed.h"

AnalogIn Ain_period(p18);
AnalogIn Ain_cycle(p20);
PwmOut pout(p21);

int main() {
    
    
    float period=10*0.001;
    float cycle=0.2;
    
    while(1) {
    //10-50ms 
    //20%-80%


        period=((Ain_period)*40+10)*0.001;
        cycle=(Ain_cycle)*0.6+0.2;
        pout.period(period);      // (whatever).f second period
        pout=cycle;      // 50% duty cycle, relative to period
        

        
        wait(1);

        
 
    }//while
}//main