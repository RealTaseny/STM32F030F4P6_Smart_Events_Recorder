/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f0xx_hal.h"

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
#define Light_Sensor_Pin GPIO_PIN_0
#define Light_Sensor_GPIO_Port GPIOA
#define One_Wire_Pin GPIO_PIN_1
#define One_Wire_GPIO_Port GPIOA
#define Key_Input_Pin GPIO_PIN_2
#define Key_Input_GPIO_Port GPIOA
#define DS1302_CE_Pin GPIO_PIN_3
#define DS1302_CE_GPIO_Port GPIOA
#define IPS_CS_Pin GPIO_PIN_4
#define IPS_CS_GPIO_Port GPIOA
#define IPS_SCK_Pin GPIO_PIN_5
#define IPS_SCK_GPIO_Port GPIOA
#define IPS_MISO_Pin GPIO_PIN_6
#define IPS_MISO_GPIO_Port GPIOA
#define IPS_MOSI_Pin GPIO_PIN_7
#define IPS_MOSI_GPIO_Port GPIOA
#define IPS_RES_Pin GPIO_PIN_1
#define IPS_RES_GPIO_Port GPIOB
#define AT24C02_SCL_Pin GPIO_PIN_9
#define AT24C02_SCL_GPIO_Port GPIOA
#define AT24C02_SDA_Pin GPIO_PIN_10
#define AT24C02_SDA_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
