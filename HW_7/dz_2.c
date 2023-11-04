/*Сортировка методом пузырька при помощи указателей.*/

#include<stdio.h>

int main()
{
  int tmp,size;
  int i,j;
  int mas[] = {4,-2,5,1,-8,2};
  
  size = sizeof(mas)/sizeof(int);

  for(i=0;i<size;i++)
  {
    printf("%d ",mas[i]); 
  }
  printf("\n");

  /////////////////////////////////////////////
  for(j=0;j<size-1;j++)
  {  
    for(i=0;i<size-1;i++)
    {
      if(*(mas+i) > *(mas+i+1))
      { 
        tmp = *(mas+i);
        *(mas+i) = *(mas+i+1);
        *(mas+i+1) = tmp; 
      } 
    }
  }
  /////////////////////////////////////////////
 
  for(i=0;i<size;i++)
  {
    printf("%d ",mas[i]); 
  }
  printf("\n");

  return 0;
}
