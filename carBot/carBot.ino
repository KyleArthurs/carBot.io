#include <avr/io.h>  //includes data sheet names

extern "C" {
#include "usart.h"
#include "motors.h"
}

int main(void) {
  //setup stuff here
  //usartInit9600(); //set up USART for 9600 N81 (no parity 8 data bits 1 stop bit)
  usartInit115200();  //set up USART for 9600 N81 (no parity 8 data bits 1 stop bit)

  motorSetup();

  //delay(3000);

  while (1)  //same as loop() function (all embeded systems need endless loop)
  {
    /*check if a bit in a register is set to 1*/
    if (usartCharReceived()) {
      
      char inChar = usartReadChar();

      switch (inChar) {
        case 'F':
          botForward();
          break;
        case 'B':
          botBack();
          break;
        case 'S':
          botStop();
          break;
        case 'L':
          botLeft();
          break;
        case 'R':
          botRight();
          break;
      }
    }
  }
}