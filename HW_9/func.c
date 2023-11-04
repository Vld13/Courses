#include<stdio.h>

void findMax(int num1, int num2)
{
  printf("max = %d\n", (num1>num2) ? num1 : num2);
  //return (num1>num2) ? num1 : num2;
}

void findMin(int num1, int num2)
{
  printf("min = %d\n", (num1<num2) ? num1 : num2);
  //return (num1<num2) ? num1 : num2;
}

void Sum(int num1, int num2)
{
  printf("sum = %d\n", num1 + num2);
  //return num1 + num2;
}

void Sub(int num1, int num2)
{
  printf("dif = %d\n", num1 - num2);
  //return num1 - num2;
}

void Mult(int num1, int num2)
{
  printf("mult = %d\n", num1 * num2);
  //return num1 * num2;
}


void Div(int num1, int num2)
{
  printf("div = %.2f\n", (float)num1 / num2);
  //return num1 / num2;
}

void Menu()
{
  puts("Choose th action:");
  puts("0. find max");
  puts("1. find min");
  puts("2. Sum");
  puts("3. Dif");
  puts("4. Mult");
  puts("5. Div");
  puts("6. Exit");
}


