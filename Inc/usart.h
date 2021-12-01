/*
 * usart.h
 *
 *  Created on: 30 сент. 2021 г.
 *      Author: Ju
 */


#ifndef USART_H_
#define USART_H_

#include "main.h"

void gpio_diodes_init();
void usart1_init();
void usart1_gpio_init();
void us_delay(uint32_t tick);

#endif /* USART_H_ */
