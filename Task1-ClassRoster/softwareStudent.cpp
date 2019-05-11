#include "softwareStudent.h"



softwareStudent::softwareStudent()
{
}

softwareStudent::softwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType) : Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3)
{

}


softwareStudent::~softwareStudent()
{
}

Degree softwareStudent::GetDegreeProgram()
{
	return SOFTWARE;
}
