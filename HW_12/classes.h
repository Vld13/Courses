#pragma once
#include<string>


int Menu();

class RetailItem
{
	private:
		std::string m_item;
		int m_amount;
		float m_price;

	public:
		RetailItem(std::string item = " ", int amount = 0, float price = 0.0)
			:m_item(item),m_amount(amount),m_price(price){}

  friend class CashRegister;
};

class CashRegister
{
	private:
		//static int id;
		RetailItem *m_buf[20];
  public:
		void buyItem(RetailItem &); 
		void getTotal();
		void showItems();
		void clear();
};
