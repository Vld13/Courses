/*Приводится пример 3-х классов CalcLength, CalcArea, CalcVolume, в которых в
виртуальной функции Calc() возвращается соответственно длина окружности, площадь
круга и объем шара.
Для демонстрации создается некоторая функция ShowResult(), в которую передается
указатель на базовый класс. Функция вызывает виртуальную функцию Calc() по
указателю. В теле функции ShowResult() неизвестно, экземпляр какого класса будет ей
передан. Экземпляр будет сформирован во время выполнения.*/

#include<iostream>
#include"class2.h"

int main()
{
	
	//void (*pFunc)() = nullptr;
  //Sphere *p = &fig1;
	//showResult(*p);

	CalcLength fig1(1);
	CalcArea fig2(1);
	CalcVolume fig3(1);

	showResult(fig1);
	showResult(fig3);
	showResult(fig2);

	return 0;
}
