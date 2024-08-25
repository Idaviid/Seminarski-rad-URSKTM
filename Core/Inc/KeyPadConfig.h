#ifndef	_KEYPADCONFIG_H
#define	_KEYPADCONFIG_H
#include "gpio.h"

#define           _KEYPAD_DEBOUNCE_TIME_MS        20
#define           _KEYPAD_USE_FREERTOS            0

const GPIO_TypeDef* _KEYPAD_COLUMN_GPIO_PORT[] =
{
  GPIOC,
  GPIOC,
  GPIOC,
  GPIOC
};

const uint16_t _KEYPAD_COLUMN_GPIO_PIN[] =
{
  GPIO_PIN_0,
  GPIO_PIN_1,
  GPIO_PIN_2,
  GPIO_PIN_3
};

const GPIO_TypeDef* _KEYPAD_ROW_GPIO_PORT[] =
{
  GPIOC,
  GPIOC,
  GPIOC,
  GPIOC
};

const uint16_t _KEYPAD_ROW_GPIO_PIN[] =
{
  GPIO_PIN_4,
  GPIO_PIN_5,
  GPIO_PIN_6,
  GPIO_PIN_7
};

#endif
