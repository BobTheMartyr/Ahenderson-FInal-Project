#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;


class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	array<int, 3> daysInCourse;
	DegreeProgram degreeProgram;
	

public:
	Student(string studentID, string firstName, string lastName, string email, int studentAge, int days1, int days2, int days3, string degreeProgram);

	//setters
	void setStudentID(string ID);
	void setFirstName(string inputFirstName);
	void setLastName(string inputLastName);
	void setEmail(string inputEmail);
	void setStudentAge(int inputAge);
	void setDaysInCourse(int days1, int days2, int days3);
	void setDegreeProgram(string degreeProgram);

	//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getStudentAge();
	array<int, 3> getDaysInCourse();
	DegreeProgram getDegreeProgram();

	//prints
	void print();

};

#endif 
