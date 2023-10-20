/*Написать программу демонстрирующую переполнение по типу char
и вывести на экран и число и символ.*/

#include<stdio.h>

int main()
{
	char c;
	unsigned char uc;
	

	c = 64;
	printf("num = %d\nchar = %c\n",c,c);

	c = -130;
	printf("Overflow char:\nnum = %d\nchar = %c\n",c,c);

	uc = 257;
	printf("Overflow unsigned char:\nnum = %d\nchar = %c\n",uc,uc);
	
	return 0;
}
