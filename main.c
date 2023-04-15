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
// pin1 in DDRA is OUTPUT
DDRA |=(1<<0);
 while(1)
	{
	 // pin1 in PORTA is HIGH
	 /******************************/
	 //PORTA |=(1<<0);
	 PORTA =0b00000001;
	 _delay_ms(1000);
	 /******************************/
	 // pin1 in PORTA is LOW
	 PORTA =0b00000000;
	 //PORTA &=~(1<<0);
	 _delay_ms(1000);
	}
}
