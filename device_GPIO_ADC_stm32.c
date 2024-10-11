
#include "stm32f7xx_hal.h"

void configure_adc(void)
{
    // Enable ADC1 clock
    __HAL_RCC_ADC1_CLK_ENABLE();

    // Config ADC
    hadc1.Instance = ADC1;
    hadc1.Init.Resolution = ADC_RESOLUTION_12B;
    hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
    hadc1.Init.ScanConvMode = DISABLE;
    hadc1.Init.ContinuousConvMode = ENABLE;
    hadc1.Init.DiscontinuousConvMode = DISABLE;
    hadc1.Init.ExternalTrigConv = ADC_SOFTWARE_START;
    HAL_ADC_Init(&hadc1);

    // Config ADC Channel
    ADC_ChannelConfTypeDef sConfig = {0};
    sConfig.Channel = ADC_CHANNEL_0; // Channel 0 (PA0)
    sConfig.Rank = 1;
    sConfig.SamplingTime = ADC_SAMPLETIME_3CYCLES;
    HAL_ADC_ConfigChannel(&hadc1, &sConfig);
}

int main(void)
{

    HAL_Init(); // Initialize the HAL Library

    // Enable GPIO Clock
    _HAL_RCC_GPIOB_CLK_ENABLE(); // "Reset and Clock Control" (RCC)

    // Configure GPIO pin as output
    GPIO_InitTypeDef GPIO_InitStruct = {0}; // Create GPIO initialization structure
    GPIO_InitStruct.Pin = GPIO_PIN_0;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; // Output Push-Pull,
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    // Config ADC
    configure_adc();

    while (1)
    {
        // Read ADC value
        uint32_t adc_value = read_adc();

        // Converts the ADC value to a delay value (0 to 1000 ms)
        uint32_t delay_time = (adc_value * 1000) / 4095; // 4095 is the maximum value for 12-bit

        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0);

        // Delay based on the value read by the ADC
        HAL_Delay(delay_time);
    }
}
