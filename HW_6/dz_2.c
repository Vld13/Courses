#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define STRING_SIZE 20

int main()
{
  char *str1 = (char*)malloc(STRING_SIZE+1); 
  char *str2 = (char*)malloc(STRING_SIZE+1);

  if((str1 == NULL) || (str2 == NULL))
  {
    puts("No memory !");
    return 1;
  } 

  printf("Enter str1: ");
  //scanf("%10[0-9a-zA-Z ]",str1);
  fgets(str1, STRING_SIZE, stdin);
  printf("Enter str2: ");
  //scanf("%10[0-9a-zA-Z ]",str2);
  fgets(str2, STRING_SIZE, stdin);


  if(!strcmp(str1, str2)) puts("Strings equals!"); 
  else puts("Strings not equals!");


  free(str1);
  free(str2);
   
  return 0;
}
