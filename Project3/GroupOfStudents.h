#pragma once
#pragma once
#include "Students.h"
#include <vector>
#include <iostream>
#include <algorithm>

class GroupOfStudents
{
private:
	std::vector<Student> students;
	int group;
	//GroupOfStudents();  --for singleton
public:
	void setGroup(int _group);
	int getGroup();
	GroupOfStudents();
	//static GroupOfStudents &getInstance();  // singleton
	GroupOfStudents(const GroupOfStudents &);
	~GroupOfStudents();
	void addStudent(int, std::string, int _group);
	void addDuplicateStudent();
	void showStudents();
	void AveregeGrade();
	void MaxMinGrade();
	void SortByGrade();
	void DeleteStudentByName(std::string);
	std::vector<Student> searchStudentsByName(std::string);
	//bool myfunction(Student &, Student &);
};

