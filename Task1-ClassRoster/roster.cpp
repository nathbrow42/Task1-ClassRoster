#include "roster.h"
using namespace std;



roster::roster()
{
}


roster::~roster()
{
}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) 
{
	//sets the instance variables from part D1 and updates the roster
}

void roster::remove(string studentID)
{
	//removes students from the roster by student ID. If the student ID does not exist, the functions prints an error message indicating that the student was not found
}

void roster::printAll()
{
	//prints a complete tab -separated list of student data using accessor functions wit hthe provided format
}

void roster::printDaysInCourse(string studentID)
{
	//prints a student's average number of days in the three courses.
}

void roster::printInvalidEmails()
{
	//verifies student email addresses and displays all invalid email addresses to the user
}

void roster::printByDegreeProgram(int degreeProgram)
{
	//prints out student information for a degree program specified by an enumerated type
}


//functionality of the program
void main() {
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Nathalie,Brown,nbro205@wgu.edu,26,23,45,31,SOFTWARE"
	};

	cout << "Scripting and Programming: Applications - C867" << endl;
	cout << "Programming language used: C++" << endl;
	cout << "Student ID: 000927962" << endl;
	cout << "Name: Nathalie Brown" << endl;

	return;
}