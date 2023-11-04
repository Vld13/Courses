/*Задача посложней. Нарисовать равнобедренный треугольник из
символов ^. Высоту выбирает пользователь.*/

#include<stdio.h>

int main()
{
  int height,length,i;

  printf("Enter height: ");
  scanf("%d",&height);

  for(length=1;height>0;height--,length+=2)
  {
    for(i=0;i<height-1;i++) printf(" ");
    for(i=0;i<length;i++) printf("^");
    printf("\n");
  }
  
  return 0;
}
