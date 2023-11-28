#include<iostream>
#include"class2.h"

CalcLength *CalcLength::calc()
{
	int R = getRadius();
  m_length = 2 * 3.14 * R;
	std::cout << "Length = " << m_length << std::endl;
  
	return this;	
}

CalcArea *CalcArea::calc()
{
	int R = getRadius();
	m_area = 3.14 * R * R;
	std::cout << "Area = " << m_area << std::endl;

  return this;	
}

CalcVolume *CalcVolume::calc()
{
	int R = getRadius();
	m_volume = (static_cast<float>(4)/3) * 3.14 * R * R * R;
	std::cout << "Volume = " << m_volume << std::endl;

  return this;	
}

void showResult(Sphere &a)
{
  a.calc();
}
