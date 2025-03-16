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


void Roster::add(string studentInformation, int slot){

        int initialPos = 0;
        int count = 0;
        string ID;
        string firstName;
        string lastName;
        string email;
        int age;
        int days1;
        int days2;
        int days3;
        string program;

        for (int i = 0; i < studentInformation.size(); i++) {
            if (studentInformation[i] == ',' || i == studentInformation.size() - 1) {
                string temp = studentInformation.substr(initialPos, i - initialPos);

                switch (count) {
                case 0:
                    ID = temp;
                    break;
                case 1:
                    firstName = temp;
                    break;
                case 2:
                    lastName = temp;
                    break;
                case 3:
                    email = temp;
                    break;
                case 4:
                    age = stoi(temp);
                    break;
                case 5:
                    days1 = stoi(temp);
                    break;
                case 6:
                    days2 = stoi(temp);
                    break;
                case 7:
                    days3 = stoi(temp);
                    break;
                case 8:
                    program = temp + studentInformation.back();
                    break;
                }

                initialPos = i + 1;
                count++;

            }

        }

        Student* newStudent = new Student(ID, firstName, lastName, email, age, days1, days2, days3, program);
        classRosterArray[slot] = newStudent;

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
