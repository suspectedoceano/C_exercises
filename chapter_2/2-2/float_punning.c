#include <stdio.h>
#include <float.h>

int main() 
{
    //Union type to punning
    typedef union   u_tag
    {
        //Both 4 bytes!
        unsigned int     nb;
        float            f;
    }               u_punning_float;

    u_punning_float pf;

    //I know the IEEE 754 encoding
    //so i hardcode min and max



    //MAX
    pf.nb = 0b01111111011111111111111111111111;
    printf("Max is          %f\n", pf.f);
    printf("Max symboli is  %f\n", FLT_MAX);
}

