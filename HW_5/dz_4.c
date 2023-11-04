/*Напишите стандартный макрос MIN – поиск минимального значения из 2-х
чисел. Для определенности пусть числа типа int.*/

#include<stdio.h>

#define MIN(n1,n2) (n1>n2 ? n2 : n1) 

int main()
{
  int a = 24;
  int b = 13;

  printf("min = %d\n",MIN(a,b));

  return 0;
}
