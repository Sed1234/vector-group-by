#pragma once
#include "students.h"
#include <vector>
#include <iostream>
#include <algorithm>
class GroupOfStudents
{
private:
	std::vector<Student> students;
	int group;
public:
	void setGroup(int _group);
	int getGroup();
	GroupOfStudents();
	~GroupOfStudents();
	void addStudent(int, std::string, int _group);
	void addDuplicateStudent();
	void showStudents();
	void AveregeGrade();
	void MaxMinGrade();
	void SortByGrade();
	std::vector<Student> searchStudentsByName(std::string);
	//bool myfunction(Student &, Student &);
};

