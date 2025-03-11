#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;


class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	string degreeProgram;
	int daysInCourse[3];

public:
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getStudentAge();
	int getDaysInCourse();
	string getDegreeProgram();

	void setStudentID( string ID );
	void setFirstName( string inputFirstName );
	void setLastName( string inputLastName );
	void setEmail( string inputEmail );
	void setStudentAge( string inputAge );
	void setDaysInCourse();
	void setDegreeProgram( string inputProgram );
	void print();

	Student(string studentID, string firstName, string lastName, string email, int studentAge, int daysInCourse[], string degreeProgram);

};

#endif // !STUDENT_H