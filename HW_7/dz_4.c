/*Задан массив из 30 вещественных чисел. Найти элемент (индекс), 
имеющий максимальное значение в массиве.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  float mas[30];
  int i,index = 0;
  float max;
  

  for(i=0;i<30;i++)
  {
    mas[i] = (double)rand()/(RAND_MAX/10);
    printf("%2.2f ",mas[i]);
  }
  printf("\n");

  max = mas[0];
  for(i=1;i<30;i++)
  {
    if(max < mas[i])
    {
      max = mas[i];
      index = i;
    }
  }

  printf("max = %2.2f\nindex = %d\n",max,index);

  return 0;
}
