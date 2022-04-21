#include<avr/io.h>
#include<util/delay.h>

int main()
{
  DDRC=0XFF; // set all 8 bits to  output//
  while(1)
  {
    PORTC=0b00111111;
    _delay_ms(1000);  //delay 1000ms

    PORTC=0b00000110;
    _delay_ms(1000); //1000ms delay

    PORTC=0b01011011;
    _delay_ms(1000); //1000ms delay

    PORTC=0b01001111;
    _delay_ms(1000); //1000ms delay

    PORTC=0b01100110;
    _delay_ms(1000); //1000ms delay

    
    PORTC=0b01101101;
    _delay_ms(1000); //1000 ms delay

    PORTC=0b11111101;
    _delay_ms(1000); //1000ms delay

    
    PORTC=0b00000111;
    _delay_ms(1000); //1000ms delay


    PORTC=0B01111111;
    _delay_ms(1000); //1000ms delay


    PORTC=0b11101111;
    _delay_ms(1000); //1000ms delay

  }


}
