#include "School.h"

void SchoolSystem::Run()
{

	int counter = 0;
	bool goFurther = 0;

	while (true)
	{
		std::cout << "Loop:" << counter << "\n";
		counter++;
		std::cin.get();
		std::cout << "1. add a new student";
		std::cout << "2. add a new class";
		std::cout << "3. add a student to a class";
		std::cout << "4. check if student is registered";
		std::cout << "5. info about student";
		std::cout << "6. remove student from a class";
		std::cout << "7. remove student from the system";
		std::cout << "8. information about a class";
		std::cout << "9. exit";
		std::cout << "do you want to continue?";
		std::cout << "1 = yes 0 = no";
		std::cin >> goFurther;
		switch (goFurther == 1)
		{
		case 1: 
		break;
		}
		if (goFurther == 0)
		{
		std::cout << "goodbye";
		break;

		}
		
	}
}

void SchoolSystem::AddStudent()
{
	Student student;
	student.name = "";
	student.age = 0;
	students.push_back(student);
}

void SchoolSystem::RemoveStudent()
{
}
