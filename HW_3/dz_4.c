/*Дано действительное число а. Пользуясь только умножением получить
а^4 и a^10 за четыре операции.*/

#include<stdio.h>  
#include<math.h>   

int main (void)
{

  double a=2.0, res1,res2,res3,res4;
  
	res1 = a*a; // a^2
	res2 = res1*res1; // a^4
	res3 = res2*res2; // a^8
	res4 = res3*res1; // a^10
	
	printf("a = %f\na^4 = %f\na^10 = %f\n",a,res2,res4);

	return 0;
}
