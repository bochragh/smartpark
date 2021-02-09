/*
 * lcd1602.h
 *
 *  Created on: Jan 21, 2020
 *      Author: Controllerstech
 */
#include "stm32f4xx_hal.h"

#define RS_Pin GPIO_PIN_6
#define RS_GPIO_Port GPIOA
#define RW_Pin GPIO_PIN_7
#define RW_GPIO_Port GPIOA
#define EN_Pin GPIO_PIN_10
#define EN_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOB
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOB
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOB
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOC


#ifndef INC_LCD1602_H_
#define INC_LCD1602_H_


 void lcd_init (void);   // initialize lcd

 void lcd_send_cmd (char cmd);  // send command to the lcd

 void lcd_send_data (char data);  // send data to the lcd

void lcd_send_string (char *str);  // send string to the lcd

 void lcd_put_cur(int row, int col);  // put cursor at the entered position row (0 or 1), col (0-15);

void lcd_clear (void);

#endif /* INC_LCD1602_H_ */
