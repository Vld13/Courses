/*Найти произведение всех чисел от 8 до n. Число n – вводится с клавиатуры оператором.
Вывести результат на экран.
*/

#include<stdio.h>

int main()
{
	int num,i;
	long res=1;
	
	printf("Enter number: ");
	scanf("%d",&num);

	i=8;
	while(i<=num)
	{
		res *= i;
		i++;
	}

	printf("res = %ld\n",res);

	return 0;
}

