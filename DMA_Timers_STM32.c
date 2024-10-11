// This is just a timer config example to PWM Generation using CubeIDE


#include "stm32f767_hal.h"

TIM_HandleTypeDef hitm1;
void configure_pwm(void) {
    htim1.Instance = TIM1;
    htim1.Init.Prescaler = 80 -1; // 80 MHz / 80 = 1MHz. Timer count from 0 to 79
    htim1.Init.Period = 1000 - 1;   // 1 MHz / 1000 = 1 KHz PWM
    htim1.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    htim1.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_PWM_Init(&htim1);
    TIM_OC_InitTypeDef sConfigOC; // Config Duty Cycle
    sConfigOC.OCMode = TIM_OCMODE_PWM1;
    sConfigOC.Pulse = 500;  // Duty cycle = 50%
    HAL_TIM_PWM_ConfigChannel(&htim1, &sConfigOC, TIM_CHANNEL_1)
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);  // Start PWM generation
}
