#include <stdio.h>

#define BITMASK 0x0F // Mask to extract lower 4 bits

int main()
{
    unsigned char value = 0xAB;

    printf("Original Value: 0x%X\n", value);

    value &= BITMASK; // Applying bitwise AND with mask;
    printf("After Mask AND with 0x0F: 0x%X\n", value);

    value |= 0x10; // Applying bitwise OR to set BIT
    printf("After Set Bit with OR with 0x10: 0x%X\n", value);

    value ^= 0x01; // Applying bitwise XOR to toggle bit
    printf("After Toggle Bit with XOR with 0x01: 0x%X\n", value);

    return 0;
}