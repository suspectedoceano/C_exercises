#include <stdio.h>
#include <float.h>

int main() {
    // Compute the ranges of various floating-point types using symbolic constants

    // FLOAT
    printf("FLOAT\n");
    printf("Minimum positive value (scientific notation)    : %E\n", FLT_MIN);
    printf("Minimum positive value (normal number)         : %.100f\n", FLT_MIN);
    printf("Maximum value (scientific notation)            : %E\n", FLT_MAX);
    printf("Maximum value (normal number)                  : %f\n", FLT_MAX);
    printf("Minimum positive subnormal value (scientific)  : %E\n", FLT_TRUE_MIN);
    printf("Minimum positive subnormal value (normal)      : %.100f\n", FLT_TRUE_MIN);
    printf("Precision value                                : %d\n", FLT_DIG);


    // DOUBLE
    printf("\nDOUBLE\n");
    printf("Minimum positive value (scientific notation)    : %E\n", DBL_MIN);
    printf("Minimum positive value (normal number)         : %.400lf\n", DBL_MIN);
    printf("Maximum value (scientific notation)            : %E\n", DBL_MAX);
    printf("Maximum value (normal number)                  : %lf\n", DBL_MAX);
    printf("Minimum positive subnormal value (scientific)  : %E\n", DBL_TRUE_MIN);
    printf("Minimum positive subnormal value (normal)      : %.400lf\n", DBL_TRUE_MIN);
    printf("Precision value                                : %d\n", DBL_DIG);

/*  // LONG DOUBLE
    printf("\nLONG DOUBLE\n");
    printf("Minimum positive value (scientific notation)    : %LE\n", LDBL_MIN);
    printf("Minimum positive value (normal number)         : %Lf\n", LDBL_MIN);
    printf("Maximum value (scientific notation)            : %LE\n", LDBL_MAX);
    printf("Maximum value (normal number)                  : %Lf\n", LDBL_MAX);
    printf("Minimum positive subnormal value (scientific)  : %LE\n", LDBL_TRUE_MIN);
    printf("Minimum positive subnormal value (normal)      : %Lf\n", LDBL_TRUE_MIN);
    printf("Precision value                                : %d\n", LDBL_DIG);
*/
}
