#include "mbed.h"
#include "C12832.h"
C12832 lcd(p5, p7, p6, p8, p11);
PwmOut led1(LED1);
AnalogIn pot1(p19);
int main() {
 while(1) {
     lcd.printf("%2f\n", pot1.read());
     lcd.printf("%2e\n", pot1.read());
 led1 = pot1;
 wait(5);
 }
}

