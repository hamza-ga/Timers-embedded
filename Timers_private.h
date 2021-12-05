/*
 * Timers_private.h
 *
 *  Created on: Sep 6, 2021
 *      Author: hp
 */

#ifndef TIMERS_TIMERS_PRIVATE_H_
#define TIMERS_TIMERS_PRIVATE_H_

//TIMER 0
#define TIMSK *((volatile u8*)(0x59))
#define OCR0 *((volatile u8*)(0x5C))
#define TCCR0 *((volatile u8*)(0x53))
#define TCNT0 *((volatile u8*)(0x52))

#define TOIE0 0
#define OCIE0 1

#define WGM00 6
#define WGM01 3
#define CS02 2
#define CS01 1
#define CS00 0
#define COM00 4
#define COM01 5

//TIMER 1
#define TCCR1A *((volatile u8*)(0x4F))
#define TCCR1B *((volatile u8*)(0x4E))
#define TCNT1 *((volatile u8*)(0x4C))
#define OCR1A *((volatile u8*)(0x4A))
#define OCR1B *((volatile u8*)(0x48))
#define ICR1 *((volatile u8*)(0x46))
#define TIFR *((volatile u8*)(0x58))

#define WGM10 0
#define WGM11 1
#define COM1A0 6
#define COM1A1 7

#define CS10 0
#define CS11 1
#define CS12 2



#endif /* TIMERS_TIMERS_PRIVATE_H_ */
