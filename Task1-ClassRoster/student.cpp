#include "student.h"



student::Student() {

}

student::Student(string studentID, string firstName, string lastName, string email, int age, int* daysToCompleteCourse, Degree degree)
{
}

student::~Student()
{
}

string student::GetStudentID()
{
	return studentID;
}

void student::SetStudentID(string studentID)
{
	studentID = studentID;
}

string student::GetFirstName()
{
	return firstName;
}

void student::SetFirstName(string firstName)
{
	firstName = firstName;
}

string student::GetLastName()
{
	return lastName;
}

void student::SetLastName(string lastName)
{
	lastName = lastName;
}

string student::GetEmail()
{
	return email;
}

void student::SetEmail(string email)
{
	email = email;
}

int student::GetAge()
{
	return age;
}

void student::SetAge(int age)
{
	age = age;
}

int student::GetDaysToCompleteCourses()
{
	return &daysToCompleteCourses;
}

void student::SetDateToCompleteCourses(int daysToCompleteCourses)
{
	&daysToCompleteCourses = daysToCompleteCourses;
}

Degree student::GetDegreeType()
{
	return degreeType;
}

void student::SetDegreeType(Degree degreeType)
{
	degreeType = degreeType;
}

void student::print()
{
}

Degree student::GetDegreeProgram()
{
	return Degree();
}

