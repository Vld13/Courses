/*Используя директиву #define, напишите именованную константу,
возвращающую число секунд в году. Високосным годом – пренебречь.*/

#include<stdio.h>

#define SECONDS_PER_YEAR (365*24*60*60)

int main()
{
  printf("Seconds per year = %d\n",SECONDS_PER_YEAR);
  return 0;
}
