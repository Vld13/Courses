/*Дано натуральное число n (вводим с клавиатуры). Найти сумму : n^2 + n+1^2 + … + 2*n^2.
Результат вывести на экран.*/

#include<stdio.h>

int main()
{
	int n,i;
	long sum=0;

	printf("Enter n: ");
	scanf("%d",&n);

	for(i=n;i<2*n+1;i++)
	{
		sum += i*i;
	}

	printf("sum = %ld\n",sum);

	return 0;
}
