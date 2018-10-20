#include<avr/io.h>
#include<stdint.h>

void initLeds(){
 DDRA |= 0xF0;
}
void ledOn(uint8_t sel){
 PORTA |= 1<<(sel+4);
}
void ledOff(uint8_t sel){
PORTA &= ~(1<<sel);
}

void ledToggle(uint8_t sel){
PORTA |= 1<<sel;
}

void ledSet(uint8_t val){
 PORTA = (PORTA & 0xF8) | (val & 0x7);
}

int main(){
 initLeds();
 uint_t8 sel = 1;
 if(sel <= 2){
 	ledOn(sel);
 }
 ledOn(1);
 ledOff(1);
 ledToggle(1);
 ledSet(5);
 return 0;
}
