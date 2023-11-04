#include<stdio.h>
#include"func.h"

//typedef int(*PF)(int, int);

int main()
{
    int num1, num2, c;
    
    void (*functions[])(int, int) = {findMin,findMax,Sum,Sub,Mult,Div};

    while(1)
    {
      printf("Enter two integer numbers: ");
      scanf("%d %d",&num1,&num2);
      
      Menu();
      scanf("%d",&c);

      switch(c)
      {
        case 0:
          functions[0](num1, num2);
          break;

        case 1:
          functions[1](num1, num2);
          break;

        case 2:
          functions[2](num1, num2);
          break;

        case 3:
          functions[3](num1, num2);
          break;

        case 4:
          functions[4](num1, num2);
          break;

        case 5:
          functions[5](num1, num2);
          break;

        case 6:
          return 0;
          break;

        default:
          break;          
      }
  
    }
                                                                                                            
    //printf("%d\n",functions[1](2,8));                   
  
  return 0;
}


