/*
 * Stoper.h
 *
 *  Created on: 16.12.2020
 *      Author: wojtaszy
 */

#ifndef TIMER_H_
#define TIMER_H_

extern "C" {
#include <stm32f0xx_hal.h>
}

class Timer {
public:
	Timer();
	void Reset();
	uint32_t Measurement();

private:
	uint32_t lastTick;
};

#endif /* TIMER_H_ */
