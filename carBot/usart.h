#ifndef USART_H
#define USART_H

#include <stdint.h>  //for uint_8

/*****************************************************
 * This function should set the USART baud rate 
 * at 9600
 ****************************************************/
void usartInit9600(void);

/*****************************************************
 * This function should set the USART baud rate 
 * at 115200
 ****************************************************/
void usartInit115200(void);

/*****************************************************
 * This function should set the bit that enables
 * the USART to generate an interupt on Rx
 * of a byte 
 ****************************************************/
void usartEnableRxInt(void);

/*****************************************************
 * This function should send a single char and wait
 * until the transmission is complete.
 ****************************************************/
void usartSendChar(char c);

/*****************************************************
 * This function should send a string of chars and 
 * wait until the transmission is complete.
 ****************************************************/
void usartSendString(char []);

/*****************************************************
 * This function should return a 1 if a char has been
 * received and a 0 if not. 
 ****************************************************/
uint8_t usartCharReceived(void);

/*****************************************************
 * This function should simply return the received 
 * char by copying it from the UDR register.
 *
 * N.B. therfore function should only be called after 
 * a call to usartCharReceived() returns a 1.
 ****************************************************/
char usartReadChar(void);

#endif /* USART_H_ */

