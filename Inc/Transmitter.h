/*
 * Transmitter.h
 *
 *  Created on: 16.12.2020
 *      Author: wojtaszy
 */

#ifndef TRANSMITTER_H_
#define TRANSMITTER_H_

#include <string>
extern "C" {
#include <stm32f0xx_hal.h>

}

using namespace std;

class Transmitter {
public:
	Transmitter(UART_HandleTypeDef* huart_p);
	bool send(uint16_t lapIdx, uint32_t timeMs);

private:
	UART_HandleTypeDef* huart_p;
};

#endif /* TRANSMITTER_H_ */
