#include "student.h"
#include <iostream>
using namespace std;
//Accessors

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

void Student::setStudentAge(string age) {
	this->studentAge = age;
}

//TODO void Student::setDaysInCourse(){}

void Student::setDegreeProgram(string degree) {
	this->degreeProgram = degree;
}

//Getters

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmail() { return this->Email; }
int Student::getStudentAge() { return this->studentAge; }
//TODO Student::getDaysInCourse(){}
string Student::getDegreeProgram() { return degreeProgram; }

//Print
void print(){
	cout << this->getStudentID() << endl;
	cout << "First Name: " << this->getFirstName() << endl;
	cout << "Last Name: " << this->getLastName() << endl;
	cout << "Age: " << this->getStudentAge() << endl;
	//TODO daysincourse cout << "Days in course: " << 
	cout << "Degree Program: " << this.getDegreeProgram() << endl;
}


Student::Student(string studentID, string firstName, string lastName, string email, int studentAge, int daysInCourse[], string degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = email;
	this->studentAge = studentAge;

	this->degreeProgram = degreeProgram;
	
}