//HELLO
#include "mbed.h"
BusOut display(p5,p6,p7,p8,p9,p10,p11,p12); //segments A,B,C,D,E,F,G,DP
int main () {
    while(1) {
        for (int i=0; i<=9; i++){
            switch(i){
                
                case 0: display = 0x5D; break; //display 0
                                case 1: display = 0x00; break; //display 0
                case 2: display = 0x67; break; //display 1
                                case 3: display = 0x00; break; //display 0
                case 4: display = 0x43; break; //display 2
                                case 5: display = 0x00; break; //display 0
                case 6: display = 0x43; break; //display 3
                                case 7: display = 0x00; break; //display 0
                case 8: display = 0x7B; break; //display 0
                                case 9: display = 0x00; break; //display 0
    }    //end of switch
    
    

     wait(0.5); //display value for 0.5s
    
} //end of for
} //end of while
}

