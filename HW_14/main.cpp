#include<iostream>
#include "class.h"

int main()
{
  Car car1("Москвич-3",400);
	Car car2("ВАЗ-2112",300);
	Truck truck1("Камаз",700);


  car1.printMaxMileage();
  car2.printMaxMileage();
	truck1.printMaxMileage();

	return 0;
}
