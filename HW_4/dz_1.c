/* Сделайте так, чтобы цифры выводились следующим образом :
      1
     2 1
    3 2 1
   4 3 2 1
  5 4 3 2 1
*/

#include<stdio.h>

int main()
{
	int i,j,k;
	int n = 9; // кол-во строк

	for(i=1;i<=n;i++)
	{
		for(k=n;k>i;k--) printf(" "); 
		for(j=i;j>0;j--) printf("%d ",j);
		printf("\n");
	}

	return 0;
}
