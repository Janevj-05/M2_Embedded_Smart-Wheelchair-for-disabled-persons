#include <wheels.h>
#include <avr/interrupt.h>
int main()
{
 TCCR0B=0;
 int c=0;
 float d;
 int b=340;
 sei();    
 while(1)
 {
  int a=0;
  //int c=0;
  DDRD=0x0b01000000;//TRIGGER PIN CONNECTED TO PD6 AND ECHO PIN CONNECTED TO PD5
  PORTD=0b00000000;
  _delay_us(10);
  PORTD=0b01000000;
  _delay_us(10);
  PORTD=0b00000000;
  
  

  while(((PIND)&(1<<PD5))==0){}//wait for rising edge
