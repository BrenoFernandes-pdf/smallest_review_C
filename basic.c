#include <stdio.h>

int main()
{
    int sensor_value = 50;

    if (sensor_value > 70)
    {
        printf("Sensor value too high!\n");
    }
    else
    {
        printf("Sensor value normal.\n");
    }

    // Switch-case
    switch (sensor_value)
    {
    case 50:
        printf("Sensor value is 50.\n");
        break;
    default:
        printf("Unkown Value.\n");
    }

    // Loop For
    for (int i = 0; i < 5; i++)
    {
        printf("Loop interation: %d\n", i);
    }

    // While Loop
    int count = 0;
    while (count < 5)
    {
        printf("Count: %d\n", count++);
    }

    return 0;
}