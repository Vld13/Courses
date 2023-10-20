/*Написать программу с переполнением по типу double.*/

#include<stdio.h>

int main()
{
	double n;

	n = 1.7e-307;
	printf("double num = %.308f\n",n);

	n = 1.7e-320;
	printf("double num = %.321f\n",n);
	
	n = 1.7e+309;
	printf("overflow double num = %f\n",n);

	return 0;

}
