#include "students.h"


Student::Student(int grade, std::string name)
{
	this->grade = grade;
	this->name = name;
}

Student::Student(const Student & last)
{
	this->grade = last.grade;
	this->name = last.name;
}
void Student::setName(std::string _name) {
	Student::name = _name;
}

std::string Student::getName() {

	return Student::name;
}
void Student::setGrade(int _grade) {
	Student::grade = _grade;
}

int Student::getGrade() {

	return Student::grade;
}
Student::~Student()
{
}
