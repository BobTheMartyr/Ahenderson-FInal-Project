#include "roster.h"
#include <string>
#include <array>

using namespace std;

Roster::Roster() {};

Roster::~Roster(){
	for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
        }
	}
}

void Roster::parse(string studentInfo){

    size_t rhs = studentInfo.find(",");
    string ID = studentInfo.substr(0, rhs);

    size_t lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    string firstName = studentInfo.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    string lastName = studentInfo.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    string email = studentInfo.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    int age = stoi(studentInfo.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    int days1 = stoi(studentInfo.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    int days2 = stoi(studentInfo.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    int days3 = stoi(studentInfo.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentInfo.find(",", lhs);
    string temp = studentInfo.substr(lhs, rhs - lhs);
    DegreeProgram program;
    if (temp == "SECURITY") {
        program = DegreeProgram::SECURITY;
    }
    else if (temp == "NETWORK") {
        program = DegreeProgram::NETWORK;
    }
    else {
        program = DegreeProgram::SOFTWARE;
    }
    
    add(ID, firstName, lastName, email, age, days1, days2, days3, program);
}


void Roster::add(string ID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){

        Student* newStudent = new Student(ID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
        
        for (int i = 0; i < 5; i++) {
            if (classRosterArray[i] == nullptr) {
                classRosterArray[i] = newStudent;
                break;
            }
        }
}

void Roster::remove(string studentID) {
    
    cout << "Removing student, ID: " << studentID << endl;
    bool studentFound = false;
    
    for (int i = 0; i < 5; i++) {
        if( classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            studentFound = true;
        }
    }

    if (!studentFound) {
        cout << "The student with ID number " << studentID << " was not found" << endl;
    }

}

void Roster::printAll() {
    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    array<int, 3> tempArr;
    for (int i = 0; i < 5; i++) {
        if ( classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID ) {
            tempArr = classRosterArray[i]->getDaysInCourse();
            cout << studentID << ": " << (tempArr[0] + tempArr[1] + tempArr[2]) / 3 << endl;
        }
    }
}

void Roster::printInvalidEmails() {

    for (int i = 0; i < 5; i++) {
        bool atSign = false;
        bool period = false;
        bool noSpaces = true;

        if (classRosterArray[i] != nullptr) {
            string tempEmail = classRosterArray[i]->getEmail();

            for (int j = 0; j < tempEmail.size(); j++) {
                if (tempEmail[j] == '@') {
                    atSign = true;
                }
                if (tempEmail[j] == '.') {
                    period = true;
                }
                if (isspace(tempEmail[j])) {
                    noSpaces = false;
                }
            }

            if (!(atSign && period && noSpaces)) {
                cout << "Invalid email address: " << tempEmail << endl;
            }
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

    for (int i = 0; i < 5; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }

}
