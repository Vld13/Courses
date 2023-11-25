#include<iostream>
#include<string>
#include"classes.h"

int main()
{
  CashRegister reg;
  enum{VIEW=1,TOTAL,EXIT};

  RetailItem item1("Пиджак",12,59.95);
  RetailItem item2("Джинсы",40,34.95);
  RetailItem item3("Рубашка",20,24.95);

	reg.buyItem(item1);
	reg.buyItem(item3);

  while(1)
	{
		switch(Menu())
		{
      case VIEW:
				reg.showItems();
				break;
			
			case TOTAL:
				reg.getTotal();
				break;

			case EXIT:
				return 0;

			default:
				std::cout << "Ошибка ввода!" << std::endl;
				break;
		}
	}
 
	return 0;
}
