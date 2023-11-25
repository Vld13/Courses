#include<iostream>
#include<string>
#include"classes.h"


static int id = 0;
/*CashRegister methods*/
void CashRegister::buyItem(RetailItem &item)
{  
	m_buf[id] = &item; 
	
	//std::cout << m_buf[0]->m_item << std::endl;
	//std::cout << id << std::endl;

	id++;
}

void CashRegister::showItems()
{
	for(int i=0;i<id;i++)
	{
		std::cout << m_buf[i]->m_item << "\n";
		//	<< m_buf[i]->m_amount << " "
		//	<< m_buf[i]->m_price << std::endl;
	}
}

void CashRegister::getTotal()
{
  float sum = 0.0;
	
	for(int i=0;i<id;i++) sum += m_buf[i]->m_price;
  
	std::cout << "Итог: " << sum << "$" << std::endl;	
}


int Menu()
{
	int choice=0;
	std::cout 
		<< "1.Просмотр корзины\n"
		<< "2.Общая стоимость\n"
		<< "3.Выход" 
		<< std::endl;

	std::cin >> choice;

  return choice;
}
