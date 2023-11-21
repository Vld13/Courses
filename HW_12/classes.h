#pragma once
#include<string>

class CashRegister;

class Retailitem
{
	private:
		std::string m_item;
		int m_amount;
		float m_price;

	public:
		Retailitem(std::string item = " ", int amount = 0, float price = 0.0)
			:m_item(item),m_amount(amount),m_price(price){}

  friend class CashRegister;
};


class CashRegister
{
	private:
		//static int id;
		Retailitem *m_buf[20];
  public:
		void buyItem(Retailitem &); 
		void getTotal();
		void showItems();
		void clear();

	friend class Retailitem;

};

