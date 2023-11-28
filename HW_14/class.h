#include<iostream>
#include<string>

class Vehicle
{
	std::string m_name;
	int m_mileage;

	public:
		Vehicle(std::string name, int mileage):
			m_name(name), m_mileage(mileage){}

		void printMaxMileage()
		{
			std::cout << m_name << " - максимальный пробег: "
				<< m_mileage << "км\n";
		}
};

class Car: public Vehicle
{
  public:
		Car(std::string name, int mileage):
			Vehicle(name,mileage){}
};

class Truck: public Vehicle
{
  public:
		Truck(std::string name, int mileage):
			Vehicle(name,mileage){}
};
