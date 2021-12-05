/*
 * Timers_program.c
 *
 *  Created on: Sep 6, 2021
 *      Author: hp
 */

#include"../lib/STD.h"
#include"../lib/bitmath.h"

#include"Timers_private.h"

void TIMER0_Init(void)
{
	//select wave generation mode
	//CTC mode
	SET_BIT(TCCR0, WGM01);
	CLR_BIT(TCCR0, WGM00);

	//select prescaler 64
	SET_BIT(TCCR0, CS00);
	SET_BIT(TCCR0, CS01);
	CLR_BIT(TCCR0, CS02);

	//set compare match value
	OCR0 = 125;

	//output compare match Intrrupt enable
	SET_BIT(TIMSK, OCIE0);

}
