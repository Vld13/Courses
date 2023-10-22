/*Напечатать таблицу умножения на 7. В виде : 1 х 7 = 7
																							2 х 7 = 14
																							и т.д
*/

#include<stdio.h>

int main()
{
	int n = 1;
	while(n<=10)
	{
		printf("%d x 7 = %d\n",n,n*7);
		n++;
	}
	return 0;
}
