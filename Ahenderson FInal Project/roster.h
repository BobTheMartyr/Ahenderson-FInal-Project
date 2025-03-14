#include <iostream>
#include <string>
#include <array>
#include "degree.h"

using namespace std

class Roster() {
	public:
		int* rosterArray[5];

		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

		void remove(string studentID); //print error if student not found

		void printAll();

		void averageDaysInCourse(string studentID);

		void printInvalidEmails();

		void printByDegreeProgram(DegreeProgram degreeProgram);
}
