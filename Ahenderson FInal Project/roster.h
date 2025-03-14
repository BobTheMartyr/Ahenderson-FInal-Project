#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include <array>
#include "degree.h"

using namespace std;

class Roster {
	public:

		Roster();

		~Roster();

		void add(string studentInformation, int slot);

		void remove(string studentID); //print error if student not found

		void printAll();

		void averageDaysInCourse(string studentID);

		void printInvalidEmails();

		void printByDegreeProgram(DegreeProgram degreeProgram);

	private:
		
		Student* classRosterArray[5];
}


#endif

