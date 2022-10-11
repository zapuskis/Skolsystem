#include "School.h"
#include <algorithm>
#include <iterator>
#include <ranges>
void SchoolSystem::Run()
{
	SchoolSystem system;
	std::string nameOfStudent;
	int counter = 0;
	int choice;

	while (true)
	{
		std::cout << "1. add a new student" "\n"; // done
		std::cout << "2. add a new class" "\n"; //idk how
		std::cout << "3. add a student to a class" "\n"; //idk how
		std::cout << "4. check if student is registered" "\n"; //half done
		std::cout << "5. info about student" "\n"; // print out age and name
		std::cout << "6. remove student from a class" "\n"; // find a student in a class and then student.erase() and or schoolClasses.erase()
		std::cout << "7. remove student from the system" "\n"; // find the student in the vector and then student.erase()
		std::cout << "8. information about a class" "\n"; // people in the class
		std::cout << "9. exit" "\n";
		std::cin >> choice ;

		if (choice == 1)
		{
			while (choice == 1)
			{
				system.AddStudent();
				std::cout << "Done""\n";
				std::cin >> choice;
			}
		
			
		}
		if (choice == 2)
		{
			while (choice == 2)
			{

			}
		}
		if (choice == 3)
		{
			
		}
		if (choice == 4)
		{
			while (choice == 4)
			{
				std::cout << "what is the students name";
				std::cin >> nameOfStudent;
				std::find(students.begin(), students.end(), nameOfStudent) != students.end();
			}

		}
		if (choice == 9)
		{
		std::cout << "goodbye";
		break;

		}
	}
		
}


void SchoolSystem::AddStudent()
{
	Student student;
	std::cout << "enter name of student""\n";
	std::cin >> student.name;
	student.name;
	std::cout << "enter age of student""\n";
	std::cin >> student.age;
	student.age;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
void SchoolSystem::AddClass()
{


}
