/*Даны два числа x, y. Вывести первое число, если оно больше второго,
и оба числа, если это не так.*/

#include<stdio.h>

int main()
{
	int x;
	int y;
	
	x = 5;
	y = 7;
	printf("x = %d, y = %d\n",x,y);
	x > y ? printf("%d\n",x) : printf("%d %d\n",x,y);

	x = 8;
	y = 8;
	printf("x = %d, y = %d\n",x,y);
	x > y ? printf("%d\n",x) : printf("%d %d\n",x,y);
	
	x = 23;
	y = 10;
	printf("x = %d, y = %d\n",x,y);
	x > y ? printf("%d\n",x) : printf("%d %d\n",x,y);

	return 0;
}

