
#include "main.h"

/* input :
 * output :
 * description : функция инициализации используемых периферий
 * USART1  -- PA9 - TX, PA10 - RX
 * Энкодер -- clk - PA6 и DT - PA7 (данные)
 * Датчик наклона -- PA11 - DDO2, PA12 - DDO1
 * author : Ju
 * date : 2021-11-09
 * version : final
 */
void init_function(){
	usart1_init();
	gpio_init_encoder_1();
	tim3_init_encoder_1();
	gpio_init_tilt();
	start_stop = 1; //переменная пуска - по умолчанию, остановки при получении команды с ПК
}

int main(void)
{
   init_function();
   while(start_stop){
#ifdef FINAL_PROGRAM
	  transfer_pac_data(); //функция передачи данных
#endif
   }
}
