// Ahenderson FInal Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"
#include <string>
#include <array>
using namespace std;



int main()
{   
    //My information
    cout << "C867: Scripting and Programming Applications" << endl; 
    cout << "Language: C++" << endl;
    cout << "Andrew Henderson" << endl;
    cout << "WGU ID: 012245062" << endl;
    cout << endl; // adding some space for readability

    //The raw data
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Andrew,Henderson,ashenderson4372@gmail.com,32,50,69,33,SOFTWARE"
    };

    //Creates the new roster
    Roster* classRoster = new Roster();

    //Finds the length of studentData. Also used as roster length
    int len = end(studentData) - begin(studentData);

    //Calls the add function to add each student to the roster array
    for (int i = 0; i < len; i++) {
        classRoster->add(studentData[i], i);
    }

    //Prints all student data and invalid emails
    classRoster->printAll();
    cout << endl; // adding some space for readability
    classRoster->printInvalidEmails();
    cout << endl; // adding some space for readability

    //Iterates through each student and prints the average days they spend in a course
    cout << "Average days in course: " << endl;
    for (int i = 0; i < len; i++) {
        if (classRoster->classRosterArray[i] != nullptr) {
            classRoster->printAverageDaysInCourse(classRoster->classRosterArray[i]->getStudentID());
        }
    }
    cout << endl; // adding some space for readability

    //Prints student information by their degree program - in this case, software
    cout << "Degree Program" << endl;
    classRoster->printByDegreeProgram(SOFTWARE);
    cout << endl; // adding some space for readability

    //removes the information of student A3 from the roster
    classRoster->remove("A3");
    cout << endl; // adding some space for readability
    //Prints the info of the remaining students
    classRoster->printAll();
    cout << endl; // adding some space for readability
    //Expects an error
    classRoster->remove("A3");

    //Nukes everything 
    delete classRoster;


    return 0;
}

