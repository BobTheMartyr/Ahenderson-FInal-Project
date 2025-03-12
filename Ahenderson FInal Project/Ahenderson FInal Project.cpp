// Ahenderson FInal Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"
#include <string>
#include <array>
using namespace std;

const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Andrew,Hendrson,ashenderson4372@gmail.com,32,50,69,420,SOFTWARE"
};

int main()
{
    cout << "C867 C++ 012245062 Andrew Henderson" << endl;

    int len = end(studentData) - begin(studentData);

    for (int i = 0; i < len; i++) {
        int initialPos = 0;
        int count = 0;
        string ID;
        string firstName;
        string lastName;
        string email;
        string age;
        array<string, 3> days = { "","","" };
        string program;
        for (int j = 0; j < studentData[i].size(); ++j) {
            if (studentData[i][j] == ',' || j == studentData[i].size() - 1) {
                string temp = studentData[i].substr(initialPos, j - initialPos);

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
                    age = temp;
                    break;
                case 5:
                    days[0] = temp;
                    break;
                case 6:
                    days[1] = temp;
                    break;
                case 7:
                    days[2] = temp;
                    break;
                case 8:
                    program = temp + studentData[i].back();
                    break;
                }

                initialPos = j + 1;
                count++;
            }

        }
        // **TODO insert student object constructor here
        cout << ID << " " << firstName << " " << lastName << " " << email << " " << age << " " << days[0] << " " << days[1] << " " << days[2] << " " << " " << program << endl;
    }


    return 0;
}

