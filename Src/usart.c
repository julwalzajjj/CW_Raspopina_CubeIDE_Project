/*
 * usart.c
 *
 *  Created on: Sep 25, 2021
 *      Author: Ju
 */

/* 8 bit angle-data (32 dec max) + 2 bit position-data*/

#include "usart.h"

void USART1_IRQHandler(){
	if((USART1->ISR & USART_CR1_RXNEIE) == USART_CR1_RXNEIE){
		USART1->ISR |= USART_ISR_RXNE;
		start_stop = 0;
	}
}

void gpio_diodes_init()
{
	RCC->AHBENR |= RCC_AHBENR_GPIOCEN;
	GPIOC->MODER |= GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0;
}

void usart1_gpio_init(){
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	//9 - TX, 10 - RX
	GPIOA->MODER |= GPIO_MODER_MODER9_1 | GPIO_MODER_MODER10_1; //AF mode
	//AFRH - for older ports |= (1<<4)|(1<<8) - first AF
	GPIOA->AFR[1] |= (0x01 << GPIO_AFRH_AFSEL9_Pos) | (0x01 << GPIO_AFRH_AFSEL10_Pos);
}

void usart1_init(){
	usart1_gpio_init();
	RCC->APB2ENR |= RCC_APB2ENR_USART1EN;

	USART1->BRR |= 8000000/BAUD;

	USART1->CR3 |= USART_CR3_OVRDIS; //1 - data re-whrite

	USART1->CR1 |= USART_CR1_TE | USART_CR1_RE;
	USART1->CR1 |= USART_CR1_RXNEIE;

	NVIC_EnableIRQ(USART1_IRQn);
	NVIC_SetPriority(USART1_IRQn, 2);

	USART1->CR1 |= USART_CR1_UE;
}

void us_delay(uint32_t tick){
    tick*=(SystemCoreClock / 1000000)/5;
    while (tick--);
}

