#pragma once
#include <string>
class Student
{
	int grade;
	std::string name;
public:
	std::string Student::getName();
	void Student::setName(std::string _name);
	void Student::setGrade(int _grade);
	int Student::getGrade();
	Student(int, std::string);
	Student(const Student &);
	~Student();
};
