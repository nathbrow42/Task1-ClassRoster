#include "networkStudent.h"



networkStudent::networkStudent()
{
}

networkStudent::networkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse1, int daysCourse2, int daysCourse3, Degree degreeType) : Student(studentID, firstName, lastName, emailAddress, age, daysCourse1, daysCourse2, daysCourse3)
{
	degreeProgram = degreeType;
}



networkStudent::~networkStudent()
{
}

Degree networkStudent::GetDegreeProgram() {
	return NETWORKING;
}