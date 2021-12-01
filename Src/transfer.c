/*
 * transfer.c
 *
 *  Created on: 16 окт. 2021 г.
 *      Author: Ju
 */

#include "transfer.h"

/* input :
 * output :
 * description : функция осуществлет передачу посылки данных в регистр TDR
 * author : Ju
 * date : 2021-10-20
 * version : final
 */
void transfer_pac_data(){
	position_tilt_data();
	angle_encoder_data();
	USART1->TDR = packing_data();
	us_delay(1000);
	while(!(USART_ISR_TXE));
}

/* input :
 * output : pac_data - пакет данных (данные с датчика наклона - текущая позиция и с энкодера - текущий угол
 * description : объединение данных с датчика наклона и энкодера в одну переменную
 * author : Ju
 * date : 2021-10-20
 * version : final
 */
uint8_t packing_data(){
	ddo1 = ddo1 << SHIFT;
	data_tilt = (ddo1 | ddo2) << NUM_ENC_DATABITS; //сдвиг данных с датчика наклона на место старших битов
	pac_data = data | data_tilt; //объединение данных с датчиков в одну посылку
	return pac_data;
}


