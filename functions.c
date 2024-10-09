#include <stdio.h>

// Function declaration
void toggle_led(int times);

int main()
{
    // Call the function
    toggle_led(3);
    return 0;
}

// Function definition
void toggle_led(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Toggling LED...%d\n", i);
        // Simulating delay and toggling
    }
}
