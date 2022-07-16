#include <avr/io.h>  //includes data sheet names

extern "C" {
#include "motors.h"
}

int main(void) {
  //setup stuff here

  /*SETTING SERIAL PORT*/
  UCSR0B |= (1 << RXEN0);  //ENABLE RX PIN(RECIEVER)

  /*CONFIG USART to 9600 8NS1*/
  UCSR0C &= ~(1 << UMSEL00);  //PUT USART IN Async MODE
  UCSR0C &= ~(1 << UMSEL01);

  UCSR0C &= ~(1 << UPM00);  //SET NO PARITY
  UCSR0C &= ~(1 << UPM01);

  UCSR0C &= ~(1 << USBS0);  //1 STOP BIT

  UCSR0C |= (1 << UCSZ00);  //SET DATA SIZE TO 8-BITS
  UCSR0C |= (1 << UCSZ01);
  UCSR0B &= ~(1 << UCSZ02);

  UBRR0 = 103;  //CONFIG TO 9600 baud using 16MH clock

  motorSetup();
  
  //delay(3000);

  while (1)  //same as loop() function (all embeded systems need endless loop)
  {
    /*check if a bit in a register is set to 1*/
    if (UCSR0A & (1 << RXC0)) {
      //RXC0 bit is a 1


      char inChar = UDR0;  //Read in char

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