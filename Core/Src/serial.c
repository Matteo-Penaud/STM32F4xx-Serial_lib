/*
 * serial.c
 *
 *  Created on: Nov 23, 2020
 *      Author: matte
 */
#include <serial.h>

uint16_t __sizeof_string(uint8_t* string)
{
	uint16_t result;

	for(result = 0; string[result] != '\0'; result++);

	result++;

	return result;
}

uint8_t* __uint_to_string(uint32_t value)
{
	uint8_t buffer;
}

void serial_send_string(UART_HandleTypeDef* huart, uint8_t* string)
{
	HAL_UART_Transmit(huart, string, __serial_sizeof_string(string), 0);
}


void serial_show_config(UART_HandleTypeDef* huart)
{

}
