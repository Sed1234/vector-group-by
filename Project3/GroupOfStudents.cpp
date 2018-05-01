#include "Groupofstudents.h"

GroupOfStudents::GroupOfStudents()
{
}


GroupOfStudents::~GroupOfStudents()
{
}
void GroupOfStudents::setGroup(int _group) {
	GroupOfStudents::group = _group;
}
int GroupOfStudents::getGroup() {
	return group;
}

void GroupOfStudents::addStudent(int grade, std::string name, int _group)
{
	students.push_back(Student(grade, name));
	GroupOfStudents::setGroup(_group);
}

void GroupOfStudents::addDuplicateStudent()
{
	students.push_back(students.back());
}

void GroupOfStudents::showStudents()
{
	for (Student s : students) {
		std::cout << "grade: " << s.getGrade() << ", name: " << s.getName() << " , group:" << GroupOfStudents::getGroup() << std::endl;
	}
}
void GroupOfStudents::AveregeGrade()
{
	double sum = 0.0;
	int cnt = 0;
	for (Student s : students) {
		sum += s.getGrade();
		cnt++;
	}
	std::cout << "Averege grade :" << (sum / cnt) << std::endl;
}

void GroupOfStudents::MaxMinGrade()
{
	int max = 0;
	for (Student s : students) {
		if (s.getGrade() > max)
			max = s.getGrade();
	}
	std::cout<<"Max grade is :" << max << std::endl;

	int min = 10;
	for (Student s : students) {
		if (s.getGrade() < min)
			min = s.getGrade();
	}
	std::cout << "Min grade is :" << min << std::endl;
}

std::vector<Student> GroupOfStudents::SortByGrade()
{
	std::sort (students.begin(), students.end(), myfunction);
	for (int i = 0; i < students.size(); i++)
	{
		std::cout << students[i].getGrade() << std::endl;
	}
	
}

std::vector<Student> GroupOfStudents::searchStudentsByName(std::string name)
{
	std::vector<Student> result;
	for (Student s : students) {
		if (s.getName() == name) {
			result.push_back(s);
		}
	}
	return result;
}
 bool GroupOfStudents::myfunction( Student  & a,  Student & b) { return a.getGrade() > b.getGrade(); }