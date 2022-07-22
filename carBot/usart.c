#include <avr/interrupt.h>
#include <util/atomic.h>

#include "usart.h"

/*SETTING SERIAL PORT*/
void usartInit9600(void) {
  UCSR0B |= ((1 << RXEN0) | (1 << TXEN0));  //ENABLE RX and TX PIN

  UBRR0 = 0x68;  //Sets the baud rate at 9600
}

void usartInit115200(void) {
  UCSR0B |= ((1 << RXEN0) | (1 << TXEN0));  //ENABLE RX and TX PIN

  UBRR0 = 0x10;  //Sets the baud rate at 115200
}

void usartEnableRxInt(void) {
  UCSR0B |= (1 << RXCIE0);
}

void usartSendChar(char c) {
  while ((UCSR0A & (1 << UDRE0)) == 0) {};  //Do nothing until UDR is ready for more data to be written to it
  UDR0 = c;
}

void usartSendString(char string[]) {
  uint8_t i = 0;
  while (string[i] != '\0') {
    usartSendChar(string[i++]);
  }
}

uint8_t usartCharReceived(void) {
  uint8_t retVal = 0;

  if (UCSR0A & (1 << RXC0)) {
    retVal = 1;
  }

  return retVal;
}

char usartReadChar(void) {
  return UDR0;
}