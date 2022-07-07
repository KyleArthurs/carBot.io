#include <avr/io.h> //includes data sheet names

#define MOT_L_F 2
#define MOT_L_B 3
#define MOT_R_F 4
#define MOT_R_B 5

int main(void)
{
  //setup stuff here
  
  /*SETTING SERIAL PORT*/
  UCSR0B |= (1 << RXEN0); //ENABLE RX PIN(RECIEVER)

  /*CONFIG USART to 9600 8NS1*/
  UCSR0C &= ~(1 << UMSEL00);  //PUT USART IN Async MODE
  UCSR0C &= ~(1 << UMSEL01);

  UCSR0C &= ~(1 << UPM00);  //SET NO PARITY
  UCSR0C &= ~(1 << UPM01);

  UCSR0C &= ~(1 << USBS0);  //1 STOP BIT

  UCSR0C |= (1 << UCSZ00);  //SET DATA SIZE TO 8-BITS
  UCSR0C |= (1 << UCSZ01);
  UCSR0B &= ~(1 << UCSZ02);

  UBRR0 = 103; //CONFIG TO 9600 baud using 16MH clock

 //Make the contol pins outputs
 DDRD |= ((1 << MOT_L_F) | (1 << MOT_L_B) | (1 << MOT_R_F) | (1 << MOT_R_B));

  //delay(3000);
  
  while(1)  //same as loop() function (all embeded systems need endless loop)
  {
    /*check if a bit in a register is set to 1*/
    if(UCSR0A & (1<<RXC0))
    {
     //RXC0 bit is a 1 
    
  
      char inChar = UDR0; //Read in char
  
      switch (inChar)
      {
        case  'F':
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

void botForward()
{
  PORTD |= (1 << MOT_L_F);
  PORTD &= ~(1 << MOT_L_B);
  PORTD |= (1 << MOT_R_F);
  PORTD &= ~(1 << MOT_R_B);
}

void botStop()
{
  PORTD &= ~(1 << MOT_L_B);
  PORTD &= ~(1 << MOT_L_F);
  PORTD &= ~(1 << MOT_R_B);
  PORTD &= ~(1 << MOT_R_F);
}

void botBack()
{
  PORTD |= (1 << MOT_L_B);
  PORTD &= ~(1 << MOT_L_F);
  PORTD |= (1 << MOT_R_B);
  PORTD &= ~(1 << MOT_R_F);

}

void botLeft()
{
  PORTD = 0X24;
}

void botRight()
{
  PORTD = 0X18;
}

