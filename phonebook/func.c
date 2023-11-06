//#ifndef __stdio_h_
//#define __stdio_h_
//#endif
#include<stdio.h>
#include"func.h"
#ifndef __func_h_
#define __func_h_
#endif


void StartMenu()
{
	puts("***Phonebook***");
	puts("0 - Add pesron.");
	puts("1 - Delete pesron.");
	puts("2 - Search pesron.");
	puts("3 - View all pesrons.");
	puts("4 - Exit.");
}

int writeFile(const char *fname, struct Person *man, int s_size)
{
	int write_size;
	FILE *file = fopen(fname, "w+");
  
	enterData(man);
	write_size = fwrite(&man,s_size,1,file);
  
	fclose(file);

	return write_size;
}

int readFile(const char *fname, struct Person *man, int s_size)
{
	int read_size;
  FILE *file = fopen(fname, "r");

	read_size = fread(&man,s_size,1,file);
  printf("Name = %s\nNumer = %ld\n",man->name, man->number);
  

  fclose(file);

	return read_size;
}

void enterData(struct Person *man)
{
  printf("Enter name: ");
	scanf("%10s",man->name);
  printf("Enter number: ");
	scanf("%ld",&man->number);

}
