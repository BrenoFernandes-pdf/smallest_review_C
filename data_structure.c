#include <stdio.h>

// Struct for sensor data
struct Sensor
{
    int id;
    float temperature;
};

// Enum for system states
enum SystemState
{
    IDLE,
    RUNNING,
    ERROR
};

int main()
{
    // Using struct
    struct Sensor temp_sensor = {1, 36.5};
    printf("Sensor ID: %d, Temperature: %.2f\n", temp_sensor.id, temp_sensor.temperature);

    // Using enum
    enum SystemState current_state = RUNNING;
    printf("System State: %d\n", current_state);

    return 0;
}
