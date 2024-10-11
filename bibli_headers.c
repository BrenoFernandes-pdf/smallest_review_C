#include "my_library.h"
#include <stdio.h>

int main()
{
    int result = add(5, 3);
    printf("Result: %d\n", result);

    return 0;
}
// Remember to compile both .c: gcc bibli_headers.c my_library.c -o bibli_headers
