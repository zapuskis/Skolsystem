#pragma once
#include "student.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
class SchoolSystem 
{
public:
	void Run();
	void AddStudent();
	void RemoveStudent();



	std::vector<Student> students;
	std::vector<Student>::iterator i1;

	std::vector<std::string> schoolClasses;
	std::vector<std::string>::iterator i2;
};
