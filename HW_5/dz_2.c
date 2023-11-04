/*Известен факториал числа. Найти это число (факториал числа n равен 1
·2 · ... ·n).*/

#include<stdio.h>

int main()
{
  int fact = 40320;
  int num = 1, res = 1;

  for(;res!=fact;num++,res*=num){}

  printf("num = %d\n",num);

  return 0;
}
