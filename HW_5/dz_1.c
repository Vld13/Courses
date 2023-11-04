/*Напечатать минимальное число, большее 200, которое нацело
делится на 17.*/

#include<stdio.h>

int main()
{
  int num = 200;
  
  while(num++)
  {
    if(num%17==0) break;	
  }
  
  printf("num = %d\n",num); 
  
  return 0;
}
