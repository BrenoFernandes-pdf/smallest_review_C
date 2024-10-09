#include <stdio.h>

int main()
{
    int value = 10;
    int *ptr = &value; // Pointer to variable 'value'

    printf("Value: %d, Address: %p\n", value, (void *)ptr);

    *ptr = 20; // Change value via pointer
    printf("New Value: %d\n", value);

    return 0;
}