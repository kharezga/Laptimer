/*
 * Stoper.cpp
 *
 *  Created on: 16.12.2020
 *      Author: wojtaszy
 */

#include "Timer.h"

Timer::Timer() {
	// TODO Auto-generated constructor stub
	lastTick = HAL_GetTick();

}

void Timer::Reset(){
	lastTick = HAL_GetTick();
	return;
}

/*
 * From user_manual:
 * ..SysTick timer generate an interrupt each 1ms..
 * .. HAL_GetTick(): this function gets current SysTick counter value..
 */

uint32_t Timer::Measurement(){
	uint32_t actualTick = HAL_GetTick();
	uint32_t diffTimeMs = actualTick - lastTick;
	return diffTimeMs;
}
