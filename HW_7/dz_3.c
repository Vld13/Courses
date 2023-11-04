/*Изучить вопрос создания многомерного динамического массива.*/

#include<stdio.h>
#include<stdlib.h>

#define N 3
#define M 5

int main()
{
  int i,j,k=0; 
  int *mas = 0;
  mas = (int*)malloc(N*M*sizeof(int));

  for(i=0;i<N;i++)
  {
    for(j=0;j<M;j++)
    {
      *(mas+i*M+j) = k;
      k++;
    }    
  }


  for(i=0;i<N;i++)
  {
    for(j=0;j<M;j++)
    {
      printf("%3d ",*(mas+i*M+j));
      k++;
    }
    printf("\n");    
  }


  i = 1;
  j = 3;
  printf("mas[%d][%d] = %d\n",i,j,*(mas+i*M+j));

}
