#include <iostream>
#include "Groupofstudents.h"

using namespace std;

int main() {
	GroupOfStudents myList;
	myList.addStudent(7, "LOL", 1);
	myList.addStudent(2, "SSS", 2);
	myList.addStudent(5, "UUU", 2);
	myList.addStudent(3, "WWW", 4);
	myList.addStudent(1, "KKK", 3);
	myList.showStudents();
	myList.AveregeGrade();
	myList.MaxMinGrade();
	myList.SortByGrade();
	myList.DeleteStudentByName("KKK");
	GroupOfStudents myList1 (myList);
	myList1.showStudents();
	system("pause");
	return 0;
}