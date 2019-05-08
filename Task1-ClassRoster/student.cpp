#include "student.h"



Student::Student() {
	studentID = "none";
	firstName = "none";
	lastName = "none";
	email = "none";
	age = 0;
	daysToCompleteCourses[3] = ;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int* daysToCompleteCourse, Degree degree)
{
}

Student::~Student()
{
}

string Student::GetStudentID()
{
	return studentID;
}

void Student::SetStudentID(string studentID)
{
	studentID = studentID;
}

string Student::GetFirstName()
{
	return firstName;
}

void Student::SetFirstName(string firstName)
{
	firstName = firstName;
}

string Student::GetLastName()
{
	return lastName;
}

void Student::SetLastName(string lastName)
{
	lastName = lastName;
}

string Student::GetEmail()
{
	return email;
}

void Student::SetEmail(string email)
{
	email = email;
}

int Student::GetAge()
{
	return age;
}

void Student::SetAge(int age)
{
	age = age;
}

int Student::GetDaysToCompleteCourses()
{
	return *daysToCompleteCourses;
}

void Student::SetDateToCompleteCourses(int& daysToCompleteCourses)
{
	daysToCompleteCourses = daysToCompleteCourses;
}



void Student::print()
{
}

Degree Student::GetDegreeProgram()
{
	return Degree();
}

