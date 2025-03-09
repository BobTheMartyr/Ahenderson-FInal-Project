#include <iosteam>
using namespace std;


Class Student{
	private: 
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int studentAge;
		string degreeProgram;
		int daysInCourse[3];

		Student(string studentID, string firstName, string lastName, string email, int studentAge, int daysInCourse[], string degreeProgram);
	
	public:
		string getStudentID();
		string getFirstName();
		string getLastName();
		string getEmail();
		int getStudentAge();
		int getDaysInCourse();
		string getDegreeProgram();

		void setStudentID();
		void setFirstName();
		void setLastName();
		void setEmail();
		void setStudentAge();
		void setDaysInCourse();
		void setDegreeProgram();


}