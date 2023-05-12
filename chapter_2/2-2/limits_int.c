#include <stdio.h>
#include <limits.h>

int main() 
{
    // Compute the ranges of char, short, int, and long variables (signed and unsigned) using symbolic constants

    // CHAR
    printf("CHAR\n");
    printf("Minimum value (signed)    : %d\n", SCHAR_MIN);
    printf("Maximum value (signed)    : %d\n", SCHAR_MAX);
    printf("Maximum value (unsigned)  : %u\n", UCHAR_MAX);

    // SHORT
    printf("\nSHORT\n");
    printf("Minimum value (signed)    : %d\n", SHRT_MIN);
    printf("Maximum value (signed)    : %d\n", SHRT_MAX);
    printf("Maximum value (unsigned)  : %u\n", USHRT_MAX);

    // INT
    printf("\nINT\n");
    printf("Minimum value (signed)    : %d\n", INT_MIN);
    printf("Maximum value (signed)    : %d\n", INT_MAX);
    printf("Maximum value (unsigned)  : %u\n", UINT_MAX);

    // LONG
    printf("\nLONG\n");
    printf("Minimum value (signed)    : %ld\n", LONG_MIN);
    printf("Maximum value (signed)    : %ld\n", LONG_MAX);
    printf("Maximum value (unsigned)  : %lu\n", ULONG_MAX);

    return 0;
}

