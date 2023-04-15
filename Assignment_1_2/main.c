/*
 * main.c
 *
 *  Created on: Apr 14, 2023
 *      Author: Ahmed Osama
 */
#include<stdint.h>
#include<util/delay.h>
#define DDRA  *((uint8_t*) 0x3A)
#define PORTA *((uint8_t*) 0x3B)
#define PINA  *(( volatile uint8_t*) 0x39)
int main(void)
{
DDRA =0b11111111;
while(1)
	{
	for(uint8_t i=0;i<=7;i++)
		{
			PORTA |=(1<<i);
			_delay_ms(100);
		}
	for(uint8_t i=0;i<=7;i++)
		{
			PORTA &=~(1<<i);
			_delay_ms(100);
		}
	}
}

