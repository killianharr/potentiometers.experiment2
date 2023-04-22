#include "mbed.h"
PwmOut led1(LED1);
AnalogIn pot1(p19);
int main() {
 while(1) {
 led1 = pot1;
 wait(0.01);
 }
}

