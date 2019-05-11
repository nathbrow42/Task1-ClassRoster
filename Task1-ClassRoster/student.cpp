#include "student.h"



Student::Student() {
	studentID = "none";
	firstName = "none";
	lastName = "none";
	email = "none";
	age = 0;
	daysToCompleteCourses[0] = 0;
	daysToCompleteCourses[1] = 0;
	daysToCompleteCourses[2] = 0;
}

Student::Student(string studID, string firstN, string lastN, string emailAddress, int studentAge, int daysCourse1, int daysCourse2, int daysCourse3)
{
	studentID = studID;
	firstName = firstN;
	lastName = lastN;
	email = emailAddress;
	age = studentAge;
	daysToCompleteCourses[0] = daysCourse1;
	daysToCompleteCourses[1] = daysCourse2;
	daysToCompleteCourses[2] = daysCourse3;
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

int *Student::GetDaysToCompleteCourses()
{
	return daysToCompleteCourses;
}

void Student::SetDateToCompleteCourses(int courseDays1, int courseDays2, int courseDays3)
{
	daysToCompleteCourses[0] = courseDays1;
	daysToCompleteCourses[1] = courseDays2;
	daysToCompleteCourses[2] = courseDays3;
}



void Student::print()
{
}

Degree Student::GetDegreeProgram()
{
	return Degree();
}

