/*
 * Transmitter.cpp
 *
 *  Created on: 16.12.2020
 *      Author: wojtaszy
 */

#include "Transmitter.h"

Transmitter::Transmitter(UART_HandleTypeDef* huart_p) {
	// TODO Auto-generated constructor stub
	this->huart_p = huart_p;
}

bool Transmitter::send(uint16_t lapNr, uint32_t timeMs){

	uint8_t data[8];
	data[0] = 0;
	data[1] = lapNr >> 8;
	data[2] = lapNr;
	data[3] = lapNr >> 24;
	data[4] = lapNr >> 16;
	data[5] = lapNr >> 8;
	data[6] = lapNr;
	data[7] = 7;




	HAL_UART_Transmit(huart_p, data, 8, 10);

	return true;
}

