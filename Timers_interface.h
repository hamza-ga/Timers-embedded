/*
 * Timers_interface.h
 *
 *  Created on: Sep 6, 2021
 *      Author: hp
 */

#ifndef TIMERS_TIMERS_INTERFACE_H_
#define TIMERS_TIMERS_INTERFACE_H_

#define OV_NB         3907
#define CM_NB         1
#define Preload       0192
#define CompareMatch  250


void TIMER0_Init(void);
void TIMER_setCallBack(u8 index,void(*ptrFuncAdrCpy)(void));
void TIMER_varyDutyCycle(u16 duty);
void EnableGlobalInterupt(void);
void TIMER__setCallBack(void(*FuncAdrCpy)(void));

#endif /* TIMERS_TIMERS_INTERFACE_H_ */
