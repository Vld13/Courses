//#ifndef __stdio_h_
//#define __stdio_h_
//#endif
#include<stdio.h>
#include"func.h"
#ifndef __func_h_
#define __func_h_
#endif


int StartMenu()
{
  int number;

	puts("\n***Phonebook***");
	puts("1 - Add pesron.");
	puts("2 - Delete pesron.");
	puts("3 - Search pesron.");
	puts("4 - View all pesrons.");
	puts("5 - Exit.");

	scanf("%d",&number);

	return number;
}

int writeFile(const char *fname, struct Person man, int s_size)
{
	int write_size;
	FILE *file = fopen(fname, "a+");
  
	printf("Enter name: ");
	scanf("%20s",man.name);
  printf("Enter number: ");
	scanf("%ld",&man.number);
  
	write_size = fwrite(&man,sizeof(struct Person),1,file);
  
	fclose(file);
	return write_size;
}

int readFile(const char *fname, struct Person man, int s_size)
{
	int read_size;
	long n = 1;
  FILE *file = fopen(fname, "r");
  
  
  while(fread(&man,sizeof(struct Person),1,file))
	{
    fseek(file,n*sizeof(struct Person),0);
    printf("Name = %s\nNumer = %ld\n",man.name,man.number);
    n++;
	}

  fclose(file);
	return read_size;
}

void enterData(struct Person man)
{
  printf("Enter name: ");
	scanf("%10s",man.name);
  printf("Enter number: ");
	scanf("%ld",&man.number);

}
