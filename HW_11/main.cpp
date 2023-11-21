/*Составить описание класса для представления времени.
Предусмотреть возможности установки времени и изменения его
отдельных полей (час, минута, секунда) с проверкой допустимости
вводимых значений. В случае недопустимых значений полей
выводятся сообщения об ошибке. Создать методы изменения
времени на заданное количество часов, минут и секунд.*/

#include<iostream>

using namespace std;

class TimeControl
{
	private:
		short m_hour;
		short m_minute;
		short m_second;

	public:
		TimeControl(short hour=0, short minute=0,short second=0)
			:m_hour(hour),m_minute(minute),m_second(second)
		{
			checkTime();
		}

   void checkTime()
	 {
			if(m_hour > 23 || m_hour < 0) {cout << "Hour setup error !" << endl; exit(0);}
			if(m_minute > 59 || m_minute < 0) {cout << "Minute setup error !" << endl;exit(0);}
			if(m_second > 59 || m_second < 0) {cout << "Second setup error !" << endl;exit(0);} 
	 }

   void setHour(short hour)
	 { 
		 m_hour = hour;
		 checkTime();
	 }
   
	 void setMinute(short minute)
	 { 
		 m_minute = minute;
		 checkTime();
	 }

   void setSecond(short second)
	 { 
		 m_second = second;
		 checkTime();
	 }

	 void printTime()
	 {
		 std::cout << m_hour << ":" << m_minute << ":" << m_second << std::endl;
	 }
};

int main()
{
	TimeControl time1(23,22,20);
	TimeControl time2;

	cout << "Time1 = "; 
	time1.printTime();

	cout << "Time2 = "; 
	time2.printTime();

  time2.setHour(11);
  time2.setMinute(20);
  time2.setSecond(13);
	cout << "Time2 = "; 
	time2.printTime();
 
  time2.setSecond(61);
	time2.printTime();

	return 0;
}
