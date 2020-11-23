/*
 * serial.h
 *
 *  Created on: Nov 23, 2020
 *      Author: matte
 */

#ifndef INC_SERIAL_H_
#define INC_SERIAL_H_

#include <stm32f4xx_hal_uart.h>

uint16_t __sizeof_string(uint8_t* string);

uint8_t* __uint_to_string(uint32_t value);

void serial_send_string(UART_HandleTypeDef* huart, uint8_t* string);

void serial_show_config(UART_HandleTypeDef* huart);

#endif /* INC_SERIAL_H_ */
