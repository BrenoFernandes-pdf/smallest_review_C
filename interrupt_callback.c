/* Just an example programming a callback or interruption function in stm32:
 #include "stm32f7xx_hal.h"

 void HAL_GPIO_EXTI_Callback(uint16_t GPIO_PIN) {
    if (GPIO_Pin == GPIO_PIN_13) {
        // Handle external interrupt (button press, for example)
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_0); // Toggle LED
    }
 }










 */
