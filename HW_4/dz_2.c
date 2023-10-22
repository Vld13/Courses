/*С клавиатуры вводится номер месяца. Необходимо проверить валидное ли
введенное значение или нет, если нет выдать оператору сообщение об ошибке.
Если значение валидное, вывести на экран название сезона к которому относится месяц.*/

#include<stdio.h>

int main()
{
	int num;

	printf("Enter number of month: ");
	scanf("%d",&num);

	if(num == 12 || num == 1 || num ==2) puts("Winter!");
	else if(num >= 3 && num <= 5) puts("Spring!");
	else if(num >= 6 && num <= 8) puts("Summer!");
	else if(num >= 9 && num <= 11) puts("Fall!");
	else puts("Incorrect symbol!");


	return 0;
}
