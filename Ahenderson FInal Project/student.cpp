#include "student.h"
#include <iostream>
#include <array>
#include <string>
using namespace std;


//Constructor
Student::Student(string studentID, string firstName, string lastName, string email, int studentAge, int days1, int days2, int days3, DegreeProgram degreeProgram) {
	setStudentID(studentID);
	setFirstName(firstName);
	setLastName(lastName);
	setEmail(email);
	setStudentAge(studentAge);
	setDaysInCourse(days1, days2, days3);
	setDegreeProgram(degreeProgram);
}

//Setters
void Student::setStudentID(string ID) {
	this->studentID = ID;
}
void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::setLastName(string lastName) {
	this->lastName = lastName;
}
void Student::setEmail(string email) {
	this->emailAddress = email;
}
void Student::setStudentAge(int age) {
	this->studentAge = age;
}
void Student::setDaysInCourse(int days1, int days2, int days3) {
	this->daysInCourse[0] = days1;
	this->daysInCourse[1] = days2;
	this->daysInCourse[2] = days3;
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

//Getters
string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmail() { return this->emailAddress; }
int Student::getStudentAge() { return this->studentAge; }
array<int, 3> Student::getDaysInCourse() { return daysInCourse; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram; }

//Print
void Student::print() {
	cout << this->getStudentID() << "\t"
		<< "First Name: " << this->getFirstName() << "\t"
		<< "Last Name: " << this->getLastName() << "\t"
		<< "Age: " << this->getStudentAge() << "\t"
		<< "Days in course: {" << this->daysInCourse[0] << ", " << this->daysInCourse[1] << ", " << this->daysInCourse[2] << "}" << "\t"
		<< "Degree Program: " << (this->getDegreeProgram() == DegreeProgram::SECURITY ? "Security" :
			this->getDegreeProgram() == DegreeProgram::NETWORK ? "Network" : "Software") << endl;

};


