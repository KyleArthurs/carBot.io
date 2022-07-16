#include <avr/io.h>  //includes data sheet names

#include "motors.h"

void motorSetup() {
  //Make the contol pins outputs
  DDRD |= ((1 << MOT_L_F) | (1 << MOT_L_B) | (1 << MOT_R_F) | (1 << MOT_R_B));
}

void botForward(void) {
  PORTD |= (1 << MOT_L_F);
  PORTD &= ~(1 << MOT_L_B);
  PORTD |= (1 << MOT_R_F);
  PORTD &= ~(1 << MOT_R_B);
}

void botStop(void) {
  PORTD &= ~(1 << MOT_L_B);
  PORTD &= ~(1 << MOT_L_F);
  PORTD &= ~(1 << MOT_R_B);
  PORTD &= ~(1 << MOT_R_F);
}

void botBack(void) {
  PORTD |= (1 << MOT_L_B);
  PORTD &= ~(1 << MOT_L_F);
  PORTD |= (1 << MOT_R_B);
  PORTD &= ~(1 << MOT_R_F);
}

void botLeft(void) {
  PORTD |= (1 << MOT_L_B);
  PORTD &= ~(1 << MOT_L_F);
  PORTD &= ~(1 << MOT_R_B);
  PORTD |= (1 << MOT_R_F);
}

void botRight(void) {
  PORTD &= ~(1 << MOT_L_B);
  PORTD |= (1 << MOT_L_F);
  PORTD |= (1 << MOT_R_B);
  PORTD &= ~(1 << MOT_R_F);
}