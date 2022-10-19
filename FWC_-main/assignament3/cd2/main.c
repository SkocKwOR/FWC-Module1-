#include <avr/io.h>
#include <stdbool.h>
int main (void)
{

	 bool A=0,B=0,C=0,Y=0;
	  DDRB =  0b00100000;  
	   DDRD =  0b11000111;
	    PORTD = 0b00111000;   

	    while(1)
	    {  
		    A = (PIND & (1 << PIND3)) == (1 << PIND3);
		    B = (PIND & (1 << PIND4)) == (1 << PIND4);
		    C = (PIND & (1 << PIND5)) == (1 << PIND5); 
	   	    Y = ((!A)|(!C));
		    PORTB |= (Y<< 5);
	    }
	     return 0;
}
