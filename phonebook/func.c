#include<stdio.h>
#include<string.h>
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

int viewAllPersons(const char *fname, struct Person man, int s_size)
{
	int read_size;
	long n = 1;
  
	FILE *file = fopen(fname,"r");
	if(!file)
	{
		puts("Cant open file!");
		return 0;
	}
  	
  
	printf("|---Name---|----Surname----|-------Number-------|\n"); 
	while(fread(&man,sizeof(struct Person),1,file))
	{
    fseek(file,n*sizeof(struct Person),0);
    n++;
    printf("|%-10s|%-15s|%-20s|\n",man.name,man.surname,man.number);
		printf("|----------|---------------|--------------------|\n");
	}
  
  fclose(file);
	return 0;
}

int searchPerson(const char *fname, struct Person man)
{
	char name[10];
	long n = 1;
	short s_flag = 0;
  
	FILE *file = fopen(fname, "r");
	if(!file)
	{
		puts("Cant open file!");
		return 0;
	}
  
	printf("Search: ");
	scanf("%10s",name);

	while(fread(&man,sizeof(struct Person),1,file))
	{
    fseek(file,n*sizeof(struct Person),0);
    n++;
		if(!strcmp(name, man.name))
		{  
			printf("%s %s %s\n",man.name,man.surname,man.number);
		  s_flag = 1;
		}
	}

	if(!s_flag) puts("No person !");

	fclose(file);
	return 0;
}

void enterData(struct Person man)
{

}
