#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
void main(void){
	int a, count;
	DDRD=0xff;
	PORTD=0;
	_delay_ms(500);
	for(a=0;a<=99;a++){
		
		count = a/10;
		count = (count<<4);
		PORTD = a%10 + count;
		
		_delay_ms(500);
	}
}