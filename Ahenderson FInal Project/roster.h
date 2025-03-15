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

	Student* classRosterArray[5];
	
	void add(string studentInformation, int slot);

	void remove(string studentID); //print error if student not found

	void printAll();

	void printAverageDaysInCourse(string studentID);

	void printInvalidEmails();

	void printByDegreeProgram(DegreeProgram degreeProgram);

};


#endif

