/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ST7789_CS_Pin GPIO_PIN_4
#define ST7789_CS_GPIO_Port GPIOA
#define ST7789_DC_Pin GPIO_PIN_0
#define ST7789_DC_GPIO_Port GPIOB
#define ST7789_RST_Pin GPIO_PIN_1
#define ST7789_RST_GPIO_Port GPIOB
#define BOTAO_Pin GPIO_PIN_9
#define BOTAO_GPIO_Port GPIOA
#define BOTAOA10_Pin GPIO_PIN_10
#define BOTAOA10_GPIO_Port GPIOA
#define BOTAOA11_Pin GPIO_PIN_11
#define BOTAOA11_GPIO_Port GPIOA
#define BOTAOA12_Pin GPIO_PIN_12
#define BOTAOA12_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_3
#define LED_GPIO_Port GPIOB
#define LEDB4_Pin GPIO_PIN_4
#define LEDB4_GPIO_Port GPIOB
#define LEDB5_Pin GPIO_PIN_5
#define LEDB5_GPIO_Port GPIOB
#define LEDB6_Pin GPIO_PIN_6
#define LEDB6_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
