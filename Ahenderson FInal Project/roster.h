#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"

using namespace std;

class Roster {

public:

	Roster();

	~Roster();

	Student* classRosterArray[5] = { nullptr };

	void parse(string studentInfo);
	
	void add(string ID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

	void remove(string studentID); //print error if student not found

	void printAll();

	void printAverageDaysInCourse(string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

};


#endif

