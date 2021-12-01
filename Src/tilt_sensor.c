/*
 * tilt_sensor.c
 *
 *  Created on: 15 окт. 2021 г.
 *      Author: Ju
 */

#include "tilt_sensor.h"

/* input :
 * output :
 * description : инициализация портов PA11 - DDO2, PA12 - DDO1 для считывания текущего положения с датчика наклона
 * author : Ju
 * date : 2021-10-15
 * version : final
 */
void gpio_init_tilt(){
	GPIOA->MODER &= ~GPIO_MODER_MODER12; //input mode
	GPIOA->MODER &= ~GPIO_MODER_MODER11;

	#ifdef PUPDR_ON
		GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR12_0;
		GPIOA->PUPDR &= ~GPIO_PUPDR_PUPDR11_0;
		GPIOA->PUPDR |= GPIO_PUPDR_PUPDR12_1; //pull down
		GPIOA->PUPDR |= GPIO_PUPDR_PUPDR11_1;
	#endif
}

/* input :
 * output :
 * description : считывание положения с датчика наклона с выводов DDO1 и DDO2 в переменные ddo1 и ddo2 соответственно
 * author : Ju
 * date : 2021-10-15
 * version : final
 */
void position_tilt_data(){
    /*
     * ddo1 - 1, ddo2 - 1 : вниз и нейтрально
     * ddo1 - 0, ddo2 - 0 : вверх
     * ddo1 - 1, ddo2 - 0 : вправо
     * ddo1 - 0, ddo2 - 1 : влево
     */
	ddo1 = (GPIOA->IDR & GPIO_IDR_12) >> 12;
	ddo2 = (GPIOA->IDR & GPIO_IDR_11) >> 11;
}
