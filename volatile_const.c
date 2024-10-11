#include <stdio.h>

volatile int sensor_value = 0; // Voltile beacuse it's updated by hardware

const int max_value = 100; // Constant variable

int main()
{
    sensor_value = 25;

    if (sensor_value > max_value)
    {
        printf("Sensor value exceeds maximum!\n");
    }
    else
    {
        printf("Sensor value is within limites.\n");
    }

    return 0;
}