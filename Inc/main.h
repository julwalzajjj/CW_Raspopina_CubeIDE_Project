/*
 * main.h
 *
 *  Created on: Sep 30, 2021
 *      Author: Ju
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f0xx.h"
#include <stdint.h>
#include "encoder1.h"
#include "usart.h"
#include "tilt_sensor.h"
#include "transfer.h"

#define BAUD 115200

#define PUPDR_ON
#define ENCODER_MODE
#define ENCODER_KY40
#define FINAL_PROGRAM

int start_stop;
uint8_t data;
uint32_t ddo1;
uint32_t ddo2;
uint8_t data;
uint8_t data_tilt;
uint8_t pac_data;
int start_stop;

#endif /* MAIN_H_ */
