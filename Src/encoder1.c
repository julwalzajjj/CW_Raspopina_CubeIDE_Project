/*
 * encoder1.c
 *
 *  Created on: 29 сент. 2021 г.
 *      Author: Ju

 *
 */

#include "encoder1.h"


/* input :
 * output :
 * description : считывание текущего угла
 * author : Ju
 * date : 2021-10-20
 * version : final
 */
void angle_encoder_data(){
	data = (uint8_t)TIM3->CNT;
}

/* input :
 * output :
 * description : инициализация портов gpio для выводов clk - PA6 и DT - PA7 (данные)
 * author : Ju
 * date : 2021-09-29
 * version : final
 */
void gpio_init_encoder_1(){
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN; //clocking
#ifdef ENCODER_KY40
	GPIOA->MODER |= GPIO_MODER_MODER6_1; //alternative
	GPIOA->MODER |= GPIO_MODER_MODER7_1;

	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR6;
	GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR7;

	GPIOA->AFR[0] |= (1UL << GPIO_AFRL_AFSEL6_Pos); //AF
	GPIOA->AFR[0] |= (1UL << GPIO_AFRL_AFSEL7_Pos);
#endif
}

/* Encoder works with TI1FP1 and TI1FP2
 * Its TIM3_CH1 - PA6 and TIM3_CH2 - PA7
 */

void tim3_init_encoder_1(){
	RCC->APB1ENR |= RCC_APB1ENR_TIM3EN; //clocking
	TIM3->CCMR1 |= (TIM_CCMR1_CC1S_0 | TIM_CCMR1_CC2S_1);
	TIM3->CCMR1 &= ~(TIM_CCMR1_CC1S_1 | TIM_CCMR1_CC2S_0);

	TIM3->CCER &= (~TIM_CCER_CC1P);
	TIM3->CCER &= (~TIM_CCER_CC2P);
	TIM3->CCER &= (~TIM_CCER_CC1NP);
	TIM3->CCER &= (~TIM_CCER_CC2NP);

	TIM3->SMCR &= ~(TIM_SMCR_SMS); //001: Encoder mode 1
	TIM3->SMCR |= (TIM_SMCR_SMS_0);

	TIM3->CCMR1 |= (TIM_CCMR1_IC1F_0 | TIM_CCMR1_IC1F_1 | TIM_CCMR1_IC1F_2 | TIM_CCMR1_IC1F_3);
	TIM3->CCMR1 |= (TIM_CCMR1_IC2F_0 | TIM_CCMR1_IC2F_1 | TIM_CCMR1_IC2F_2 | TIM_CCMR1_IC2F_3);

	TIM3->ARR = 30;

	TIM3->CR1 |= TIM_CR1_CEN;
}

