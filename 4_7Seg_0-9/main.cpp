//0-9
#include "mbed.h"
BusOut display(p5,p6,p7,p8,p9,p10,p11,p12); //segments A,B,C,D,E,F,G,DP
int main () {
    while(1) {
        for (int i=0; i<=9; i++){
            switch(i){
                
                case 0: display = 0x7B; break; //display 0
                case 1: display = 0x18; break; //display 1
                case 2: display = 0x37; break; //display 2
                case 3: display = 0x3E; break; //display 3
                case 4: display = 0x5C; break; //display 0
                case 5: display = 0x6E; break; //display 1
                case 6: display = 0x6F; break; //display 2
                case 7: display = 0x38; break; //display 3
                case 8: display = 0x7F; break; //display 0
                case 9: display = 0x7E; break; //display 0
    }    //end of switch
    wait(0.5); //display value for 0.5s
} //end of for
} //end of while
}