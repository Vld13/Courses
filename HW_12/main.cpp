#include<iostream>
#include<string>
#include"classes.h"

int main()
{
  CashRegister reg;
  Retailitem item1("Пиджак",12,59.95);
  Retailitem item2("Джинсы",40,34.95);
  Retailitem item3("Рубашка",20,24.95);

	reg.buyItem(item1);
	reg.buyItem(item3);

	//reg.showItems();
	reg.getTotal();
 
	return 0;
}
