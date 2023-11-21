#include<iostream>
#include<string>
#include"classes.h"


static int id = 0;

void CashRegister::buyItem(Retailitem &item)
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
		std::cout << m_buf[i]->m_item << " "
			<< m_buf[i]->m_amount << " "
			<< m_buf[i]->m_price << std::endl;
	}
}

void CashRegister::getTotal()
{
  float sum = 0.0;
	
	for(int i=0;i<id;i++) sum += m_buf[i]->m_price;
  
	std::cout << "Итог: " << sum << "$" << std::endl;	
}
/*
class CashRegister::CashRegister
{
  public:
		void buyItem(Retailitem &item) 
		{
      m_buf[0] = &item; 
			std::cout << m_buf[0]->m_price << std::endl;
		}
		void getTotal() {}
		void showItems()
		{
			std::cout << m_buf[0]->m_price << std::endl;
		}
		void clear() {}
};
*/

