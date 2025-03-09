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

void Student::setStudentAge(int age) {
	this->studentAge = age;
}

//TODO daysincourse

void Student::setDegreeProgram(string degree) {
	this->degreeProgram = degree;
}

//Getters

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmail() { return this->Email; }
int Student::getStudentAge() { return this->studentAge; }
//TODO get daysincourse
string Student::getDegreeProgram() { return degreeProgram; }


Student::Student(string studentID, string firstName, string lastName, string email, int studentAge, int daysInCourse[], string degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = email;
	this->studentAge = studentAge;

	this->degreeProgram = degreeProgram;
	
}