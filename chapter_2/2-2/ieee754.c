#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h> /* for CHAR_BIT */

/** formatted output of ieee-754 representation of float */
void show_ieee754 (float f)
{
    union 
	{
        float f;
        uint32_t u;
    } fu = { .f = f };
    int i = sizeof(f) * CHAR_BIT;

    printf ("  ");
    while (i--)
        printf ("%d ", (fu.u >> i) & 0x1);

    putchar ('\n');
    printf (" |- - - - - - - - - - - - - - - - - - - - - - "
            "- - - - - - - - - -|\n");
    printf (" |s|      exp      |                  mantissa"
            "                   |\n\n");
}

int main (int ac, char **av) 
{
    float   f1 = atof(av[1]);

    show_ieee754 (f1);

    return 0;
}
