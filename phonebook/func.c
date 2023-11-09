#include<stdio.h>
#include"func.h"
#ifndef __func_h_
#define __func_h_
#endif


int startMenu()
{
  int number;

	puts("\n***Phonebook***");
	puts("1 - Add pesron.");
	puts("2 - Delete pesron.");
	puts("3 - Search pesron.");
	puts("4 - View all pesrons.");
	puts("5 - Exit.");

	printf("Your choice: ");
	scanf("%d",&number);

	return number;
}

int writeFile(const char *fname, struct Person man, int s_size)
{
	int write_size;
	FILE *file = fopen(fname, "a+");
  
	printf("Name: ");
	scanf("%10s",man.name);
	//fgets(man.name,10,stdin);
	printf("Surname: ");
	scanf("%15s",man.surname);
	//fgets(man.surname,15,stdin);
  printf("Number: ");
	scanf("%20s",man.number);
	//fgets(man.number,20,stdin);
  
	write_size = fwrite(&man,sizeof(struct Person),1,file);
  
	fclose(file);
	return write_size;
}

void viewAllPersons(const char *fname, struct Person man, int s_size)
{
	int read_size;
	long n = 1;
  FILE *file = fopen(fname, "r");
  
	printf("|---Name---|----Surname----|-------Number-------|\n");
  
	while(fread(&man,sizeof(struct Person),1,file))
	{
    fseek(file,n*sizeof(struct Person),0);
    n++;
    printf("|%-10s|%-15s|%-20s|\n",man.name,man.surname,man.number);
		printf("|----------|---------------|--------------------|\n");
	}
  
  fclose(file);
}

void enterData(struct Person man)
{
  //printf("Enter name: ");
  //scanf("%10s",man.name);
  //printf("Enter number: ");
	//scanf("%ld",&man.number);

}
