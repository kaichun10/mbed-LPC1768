//111
// Sets the mbed up as Master, and exchanges data with a slave, sending its own switch positions, and displaying those of the slave.
#include "mbed.h"
SPI ser_port(p11, p12, p13); // mosi, miso, sclk
DigitalOut red_led(p25); //red led
DigitalOut green_led(p26); //green led
DigitalOut cs(p14); //this acts as “slave select”
DigitalIn switch_ip1(p5);
DigitalIn switch_ip2(p6);
char switch_word ; //word we will send
char recd_val; //value return from slave
int main() {
    while (1){
 //Default settings for SPI Master chosen, no need for further configuration
 //Set up the word to be sent, by testing switch inputs
        switch_word=0xa0; //set up a recognisable output pattern
        if (switch_ip1==1)

            switch_word=switch_word|0x01; //OR in lsb
        if (switch_ip2==1)
            switch_word=switch_word|0x02; //OR in next lsb
        cs = 0; //select slave
        recd_val=ser_port.write(switch_word); //send switch_word and receive data
        cs = 1;
        wait(0.01);

 //set leds according to incoming word from slave
        red_led=0; //preset both to 0
        green_led=0;
        recd_val=recd_val&0x03; //AND out unwanted bits
        if (recd_val==1)
            red_led=1;
        if (recd_val==2)
            green_led=1;
        if (recd_val==3){
            red_led=1;
            green_led=1;
           }
        }
    }//main