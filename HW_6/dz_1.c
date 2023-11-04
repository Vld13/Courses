/*Выполнить сравнение 2-х строк, введенных с клавиатуры с 
игнорированием пробелов.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define STRING_SIZE 20


int main()
{
  int flag = 0;
	char *tmpAddr1 = 0;
	char *tmpAddr2 = 0;
  
  char *str1 = (char *)malloc(STRING_SIZE);
  char *str2 = (char *)malloc(STRING_SIZE); 

  char *newStr1 = (char *)malloc(STRING_SIZE);
  char *newStr2 = (char *)malloc(STRING_SIZE);

  printf("Enter str1: ");
  //scanf("%10[0-9a-zA-Z ]",str1);
  fgets(str1, STRING_SIZE, stdin);
  printf("Enter str2: ");
  //scanf("%10[0-9a-zA-Z ]",str2);
  fgets(str2, STRING_SIZE, stdin);


  tmpAddr1 = newStr1;
  tmpAddr2 = newStr2;

  for(;*str1;str1++)
  {
     if(*str1!=' ')
     {
       *newStr1 = *str1;
       newStr1++;
     }
  }

  for(;*str2;str2++)
  {
     if(*str2!=' ')
     {
       *newStr2 = *str2;
       newStr2++;
     }
  }

  newStr1 = tmpAddr1;
  newStr2 = tmpAddr2;
 

  for(;*newStr1;newStr1++,newStr2++)
  {
     if(*newStr1!=*newStr2)
     {
       //puts("Strings not equals!");
       flag = 1;
			 break;
     }
  }

	
	if(flag)
    puts("Strings not equals!");
	else	
    puts("Strings equals!");

  free(str1);
  free(str2);
  free(newStr1);
  free(newStr2);

  return 0;
}
