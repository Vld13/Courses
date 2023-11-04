#include<stdio.h>

void test_elipsis(int n, ...);

int main()
{
  test_elipsis(3, 1, 2, 8, -1);
  return 0;
}

void test_elipsis(int n, ...)
{
  int *p = &n;
  for(;*p!=-1;p++)
  {
    printf("%d ",*p);
  }
  printf("\n");
}
