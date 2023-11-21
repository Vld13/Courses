#include<iostream>
#include<string>

class Student
{
	private:
		std::string fio;
		int group_number;
		int progress[5];
	
	public:
		void setStudent(std::string set_fio, int set_group_number)
		{
			fio = set_fio;
			group_number = set_group_number;
		}

		void printStudent()
		{
			std::cout << "Name: " << fio << std::endl;
			std::cout << "Group: " << group_number << std::endl;
		}

		
};

int main()
{
  Student vlad;
	
	vlad.setStudent("Lyushakov V.A.",2);
  vlad.printStudent();
	return 0;
}
