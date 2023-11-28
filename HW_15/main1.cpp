/*Объявляется 3 класса с именами A, B, C. Класс A является базовым для класса B.
Класс B является базовым для класса C. Классы содержат только один метод,
выводящий название класса. С помощью механизма полиморфизма в
функцию DemoPolymorphism() передается ссылка на один из экземпляров. В
соответствии с переданным экземпляром вызывается требуемый метод.*/

#include<iostream>

class A
{
	public:
		virtual	void printName()
		{
			std::cout << "class A" << std::endl;
		}
};

class B: public A
{
	public:
		virtual void printName()
		{
			std::cout << "class B" << std::endl;
		}
};

class C: public B
{
	public:
		virtual void printName()
		{
			std::cout << "class C" << std::endl;
		}
};

void demoPolymorphism(A &);

int main()
{
	A a1;
	B b1;
	C c1;

	demoPolymorphism(b1);
	demoPolymorphism(a1);
	demoPolymorphism(c1);

	return 0;
}

void demoPolymorphism(A &a)
{
	a.printName();
}

