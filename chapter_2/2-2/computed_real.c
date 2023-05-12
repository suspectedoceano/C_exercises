#include <stdio.h>
#include <float.h>
#include <math.h>


int main()
{
	//Method 1 
	//Real calculation
	double	f_max;
	double	f_min;
	double	f_min_real;
	double	mantissa;

	// By default there is an implicit 1.__________
	// For normalized values the mantissa implicitly 1
	mantissa = 1;  
	//Mantissa is just the sum of all
	//23 bits, ~1.999 is the max valu
	for (int i = 1; i <= 23; ++i)
		mantissa += pow(2, -i);

	printf("The value of the mantissa is %.15f\n", mantissa);

		   //0b11111110 - BIAS
	f_max = pow(2, 254 - 127) * mantissa;
	printf("The max float computed is %f\n", f_max);
	printf("The max float symbolic is %f\n", FLT_MAX);


	// refresh mantissa
	mantissa = 1;

	f_min = pow(2, 1 - 127) * mantissa;
	printf("The min float computed is %0.100f\n", f_min);
	printf("The min float symbolic is %0.100f\n", FLT_MIN);


	//Denormalized values
	//We assume mantissa 0._____ and not 1.______
	mantissa = 0;

	//I take the smalles bit into mantissa
	mantissa = pow(2, -23);
	f_min_real = pow(2, 1 - 127) * mantissa;
	printf("The real min float computed is %0.100f\n", f_min_real);
	printf("The real min float symbolic is %0.100f\n", FLT_TRUE_MIN);
	printf("The min float is bigger   ->>> %0.100f\n", FLT_MIN);
}
