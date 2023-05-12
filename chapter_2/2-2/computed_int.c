#include <stdio.h>

int main() 
{
    // CHAR
    /*
     *Algo
     * 1) ~0 -> 0 is a literal int, 0b00000000000000000000000000000000
     *          ~ inverts the bin   0b11111111111111111111111111111111
     * 2) (unsigned char)-> Cast to unsigned char 0b11111111 
     *          💡 unsigned because logic vs arithmetic shift
     * 3) 0b11111111 >> 1 = 0b01111111
     *
     * 4) (signed char) i cast back to signed char cause shift is made
     *
     * 5) ~0b01111111 -> 0b10000000 
*/
                    //"when shift, do it with unsigned"
                    //"signed" is redundant, just to make clearer 
    char char_min = ~(signed char)((unsigned char)~0 >> 1);
    char char_max = (char)((unsigned char)~0 >> 1);
    unsigned char uchar_max = ~0;

    printf("CHAR\n");
    printf("Minimum value     : %d\n", char_min);
    printf("Maximum value     : %d\n", char_max);
    printf("Unsigned Max value: %u\n", uchar_max);

    // SHORT
    // Here i hardcode values
    short short_min = 0b1000000000000000; 
    short short_max = ~short_min;
    unsigned short ushort_max = ~0;

    printf("\nSHORT\n");
    printf("Minimum value     : %d\n", short_min);
    printf("Maximum value     : %d\n", short_max);
    printf("Unsigned Max value: %u\n", ushort_max);

    // INT
    //  Here i use the - to invert the value,  and then -1
    int int_min = -(int)((unsigned int)~0 >> 1) - 1;
    int int_max = (int)((unsigned int)~0 >> 1);
    unsigned int uint_max = ~0;

    printf("\nINT\n");
    printf("Minimum value     : %d\n", int_min);
    printf("Maximum value     : %d\n", int_max);
    printf("Unsigned Max value: %u\n", uint_max);

    // LONG
    long long_min = -(long)((unsigned long)~0 >> 1) - 1;
    long long_max = (long)((unsigned long)~0 >> 1);
    unsigned long ulong_max = ~0;

    printf("\nLONG\n");
    printf("Minimum value     : %ld\n", long_min);
    printf("Maximum value     : %ld\n", long_max);
    printf("Unsigned Max value: %lu\n", ulong_max);

    return 0;
}
